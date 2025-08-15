/**
 * @file citycodeutils.cpp
 * @brief 城市代码工具类的实现文件
 * @author Weather Forecast Team
 * @date 2025
 * 
 * 该文件实现了CityCodeUtils类的所有功能，包括从JSON资源文件加载城市数据、
 * 根据城市名称查找对应的城市代码等核心功能。
 * 支持全国各级行政区划的城市代码查询服务。
 */

#include "citycodeutils.h"    // 城市代码工具类头文件

#include <QFile>              // Qt文件操作类
#include <QJsonArray>         // Qt JSON数组类
#include <QJsonDocument>      // Qt JSON文档处理类

/**
 * @brief CityCodeUtils类的构造函数
 * 
 * 创建CityCodeUtils实例。城市映射表采用延迟初始化策略，
 * 即在首次调用getCityCodeFromName函数时才会加载城市数据，
 * 以提高应用程序启动速度。
 */
CityCodeUtils::CityCodeUtils()
{
    // 构造函数为空，城市数据将在首次使用时延迟加载
}

/**
 * @brief 根据城市名称获取对应的城市代码
 * @param cityName 要查询的城市名称
 * @return 对应的城市代码字符串，未找到时返回空字符串
 * 
 * 该函数实现智能城市名称匹配，支持多种城市名称格式：
 * 1. 首先尝试精确匹配用户输入的城市名称
 * 2. 如果失败，尝试添加"市"后缀进行匹配
 * 3. 如果仍失败，尝试添加"县"后缀进行匹配
 * 4. 最后尝试添加"区"后缀进行匹配
 * 
 * 如果城市映射表为空，会自动调用InitCityMap()进行初始化。
 * 这种延迟加载策略可以提高应用程序的启动速度。
 */
QString CityCodeUtils::getCityCodeFromName(QString cityName)
{
    // 检查城市映射表是否已初始化，如果为空则进行初始化
    if(CityMap.isEmpty())
    {
        InitCityMap();
    }
    
    // 1. 首先尝试精确匹配用户输入的城市名称
    QMap<QString,QString>::iterator it = CityMap.find(cityName);
    if( it == CityMap.end())
    {
        // 2. 尝试添加"市"后缀进行匹配（适用于地级市）
        it = CityMap.find(cityName+"市");
        if( it == CityMap.end())
        {
            // 3. 尝试添加"县"后缀进行匹配（适用于县级行政区）
            it = CityMap.find(cityName+"县");
        }
        if( it == CityMap.end())
        {
            // 4. 尝试添加"区"后缀进行匹配（适用于市辖区）
            it = CityMap.find(cityName+"区");
        }
        if( it == CityMap.end())
        {
            // 5. 所有匹配尝试都失败，返回空字符串表示未找到
            return "";
        }

    }
    // 返回找到的城市代码
    return it.value();

}

/**
 * @brief 初始化城市映射表
 * 
 * 从Qt资源文件":/citycode.json"中读取城市数据，解析JSON格式的城市信息
 * 并填充到CityMap映射表中。该函数通常在首次查询城市代码时自动调用。
 * 
 * JSON文件格式预期为数组，每个元素包含：
 * - city_name: 城市名称（字符串）
 * - city_code: 城市代码（字符串）
 * 
 * 如果JSON文件格式不正确或读取失败，映射表将保持为空。
 */
void CityCodeUtils::InitCityMap()
{
    // 打开Qt资源文件中的城市代码JSON数据
    QFile file(":/citycode.json");
    
    // 以只读模式打开文件
    file.open(QIODevice::ReadOnly);
    
    // 读取文件的全部内容到字节数组
    QByteArray rawData = file.readAll();
    
    // 关闭文件释放资源
    file.close();

    // 将字节数组解析为JSON文档
    QJsonDocument jsonDoc = QJsonDocument::fromJson(rawData);
    
    // 检查JSON文档是否为数组格式
    if(jsonDoc.isArray())
    {
        // 获取城市数据数组
        QJsonArray citys = jsonDoc.array();
        
        // 遍历数组中的每个城市数据项
        for(QJsonValue val : citys)
        {
            // 检查当前项是否为有效的JSON对象
            if(val.isObject())
            {
                // 从JSON对象中提取城市名称
                QString cityName = val["city_name"].toString();
                
                // 从JSON对象中提取城市代码
                QString cityCode = val["city_code"].toString();
                
                // 将城市名称和代码的映射关系插入到映射表中
                CityMap.insert(cityName,cityCode);
            }
        }
    }
}
