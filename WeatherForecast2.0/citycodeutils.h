/**
 * @file citycodeutils.h
 * @brief 城市代码工具类的头文件
 * @author Weather Forecast Team
 * @date 2025
 * 
 * 该文件定义了CityCodeUtils类，用于处理城市名称与城市代码之间的映射关系。
 * 主要功能包括从JSON文件加载城市数据、根据城市名称查找对应的城市代码等。
 * 城市代码用于天气API请求，以获取特定城市的天气信息。
 */

#ifndef CITYCODEUTILS_H
#define CITYCODEUTILS_H

#include <QMap>         // Qt映射容器，用于存储城市名称到代码的映射
#include <QString>      // Qt字符串类

/**
 * @class CityCodeUtils
 * @brief 城市代码工具类
 * 
 * 该类提供城市名称与城市代码之间的转换功能。
 * 城市代码是天气API识别不同城市的唯一标识符。
 * 
 * 主要功能：
 * - 从JSON资源文件加载全国城市代码数据
 * - 根据城市名称查找对应的城市代码
 * - 支持多种城市名称格式（市、县、区等后缀）
 * - 提供高效的城市代码查询服务
 */
class CityCodeUtils
{
public:
    /**
     * @brief 默认构造函数
     * 
     * 创建CityCodeUtils实例，城市映射表将在首次使用时延迟初始化。
     */
    CityCodeUtils();

    /**
     * @brief 城市名称到城市代码的映射表
     * 
     * 存储从JSON文件加载的城市数据，键为城市名称，值为对应的城市代码。
     * 该映射表在首次调用getCityCodeFromName时自动初始化。
     */
    QMap<QString,QString> CityMap ={};
    
    /**
     * @brief 根据城市名称获取城市代码
     * @param cityName 城市名称（支持带或不带"市"、"县"、"区"后缀）
     * @return 对应的城市代码，如果未找到则返回空字符串
     * 
     * 该函数会自动尝试多种城市名称格式：
     * 1. 原始输入的城市名称
     * 2. 城市名称 + "市"
     * 3. 城市名称 + "县"
     * 4. 城市名称 + "区"
     * 
     * 如果映射表为空，会自动调用InitCityMap()进行初始化。
     */
    QString getCityCodeFromName(QString cityName);
    
    /**
     * @brief 初始化城市映射表
     * 
     * 从资源文件":/citycode.json"中读取城市数据，
     * 解析JSON格式的城市信息并填充到CityMap中。
     * 该函数通常在首次查询城市代码时自动调用。
     */
    void InitCityMap();
};

#endif // CITYCODEUTILS_H
