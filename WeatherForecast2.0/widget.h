/**
 * @file widget.h
 * @brief 天气预报应用程序主窗口类的头文件
 * @author Weather Forecast Team
 * @date 2025
 * 
 * 该文件定义了Widget类，这是天气预报应用程序的主窗口类。
 * 负责用户界面的显示、用户交互处理、网络数据获取和天气信息展示。
 */

#ifndef WIDGET_H
#define WIDGET_H

// Qt核心组件头文件
#include <QMenu>                    // 右键菜单组件
#include <QWidget>                  // 窗口基类
#include <QCoreApplication>         // 应用程序核心功能
#include <QNetworkAccessManager>    // 网络访问管理器
#include <QNetworkRequest>          // 网络请求类
#include <QNetworkReply>            // 网络响应类
#include <QObject>                  // Qt对象基类
#include <QDebug>                   // 调试输出
#include <QLabel>                   // 标签控件
#include <QList>                    // Qt列表容器

// 自定义类头文件
#include "citycodeutils.h"          // 城市代码工具类
#include "day.h"                    // 天气数据结构类

// Qt UI命名空间声明
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

/**
 * @class Widget
 * @brief 天气预报应用程序的主窗口类
 * 
 * Widget类继承自QWidget，是整个天气预报应用程序的核心界面类。
 * 该类负责：
 * - 用户界面的创建和管理
 * - 网络请求的发送和响应处理
 * - 天气数据的解析和显示
 * - 用户交互事件的处理（鼠标拖拽、城市搜索等）
 * - 温度曲线图的绘制
 */
class Widget : public QWidget
{
    Q_OBJECT

public:
    // 天气数据存储数组，存储7天的天气信息
    Day days[7];
    
    // UI控件列表，用于批量管理界面元素
    QList<QLabel *> mDateList;      // 日期标签列表
    QList<QLabel *> mWeekList;      // 星期标签列表
    QList<QLabel *> mIconList;      // 天气图标标签列表
    QList<QLabel *> mWeaTypeList;   // 天气类型标签列表
    QList<QLabel *> mAirqList;      // 空气质量标签列表
    QList<QLabel *> mFxList;        // 风向标签列表
    QList<QLabel *> mFlList;        // 风力标签列表

    /**
     * @brief 构造函数
     * @param parent 父窗口指针，默认为nullptr
     * 
     * 初始化主窗口，设置UI界面，建立网络连接，
     * 配置各种控件和事件处理器。
     */
    Widget(QWidget *parent = nullptr);
    
    /**
     * @brief 析构函数
     * 
     * 清理资源，释放UI对象和其他动态分配的内存。
     */
    ~Widget();

protected:
    /**
     * @brief 鼠标按下事件处理函数
     * @param event 鼠标事件对象
     * 
     * 重写QWidget的虚函数，处理鼠标按下事件：
     * - 左键按下：记录鼠标相对窗口的偏移量，用于窗口拖拽
     * - 右键按下：显示退出菜单
     */
    void mousePressEvent (QMouseEvent *event);
    
    /**
     * @brief 鼠标移动事件处理函数
     * @param event 鼠标事件对象
     * 
     * 重写QWidget的虚函数，实现窗口拖拽功能。
     * 当鼠标左键按下后移动时，根据偏移量更新窗口位置。
     */
    void mouseMoveEvent(QMouseEvent *event) override;
    
    /**
     * @brief 事件过滤器
     * @param watched 被监视的对象
     * @param event 事件对象
     * @return 是否处理了该事件
     * 
     * 用于处理特定控件的绘制事件，主要用于绘制温度曲线图。
     */
    bool eventFilter(QObject *watched,QEvent *event);

public slots:
    /**
     * @brief 网络请求响应处理槽函数
     * @param reply 网络响应对象
     * 
     * 当网络请求完成时被调用，负责：
     * - 检查请求状态和HTTP状态码
     * - 读取服务器返回的天气数据
     * - 调用数据解析函数处理JSON数据
     * - 处理网络错误并显示错误信息
     */
    void readHttpReply(QNetworkReply *reply);

private slots:
    /**
     * @brief 城市搜索按钮点击槽函数
     * 
     * 当用户点击搜索按钮时被调用，获取用户输入的城市名称，
     * 查找对应的城市代码，并发起天气数据请求。
     */
    void on_LineEditCity_clicked();

    /**
     * @brief 城市输入框回车键槽函数
     * 
     * 当用户在城市输入框中按下回车键时被调用，
     * 功能与搜索按钮点击相同。
     */
    void on_lineEditCity_returnPressed();

private:
    // UI界面相关成员变量
    Ui::Widget *ui;                     // UI界面对象指针
    QMenu *menuQuit;                    // 右键退出菜单
    QPoint mOffset;                     // 鼠标拖拽时的偏移量
    
    // 网络请求相关成员变量
    QNetworkReply *reply;               // 网络响应对象
    QString strUrl;                     // 天气API请求URL
    QNetworkAccessManager *manager;     // 网络访问管理器
    
    // 数据处理相关成员变量
    CityCodeUtils cityCodeUtils;        // 城市代码工具类实例
    QMap<QString,QString> mTypeMap;     // 天气类型到图标路径的映射表
    
    /**
     * @brief 空气质量等级到样式的映射表
     * 
     * 存储不同空气质量等级对应的CSS样式字符串，用于统一管理空气质量显示样式。
     * 键为空气质量等级字符串（如"优"、"良"等），值为对应的样式字符串。
     */
    QMap<QString,QString> mAirQualityStyleMap;
    
    // 配置相关成员变量
    QString mApiAppId;      // API应用ID
    QString mApiAppSecret;  // API密钥
    QString mApiBaseUrl;    // API基础URL
    QString mApiVersion;    // API版本
    
    // 私有成员函数声明
    // parseWeatherJsonData函数已删除，请使用parseWeatherJsonDataNew
    
    /**
     * @brief 验证城市名称输入的有效性
     * @param cityName 用户输入的城市名称
     * @return 验证结果，true表示有效，false表示无效
     * 
     * 检查城市名称的格式和长度是否符合要求：
     * - 长度在1-20个字符之间
     * - 只包含中文字符、英文字母和数字
     * - 不包含特殊符号和空格
     */
    bool validateCityName(const QString &cityName);
    
    /**
     * @brief 加载配置文件
     * 
     * 从配置文件中读取应用程序设置，包括API密钥、默认城市等。
     */
    void loadConfig();
    
    /**
     * @brief 获取天气API的URL
     * @return 完整的API请求URL字符串
     * 
     * 根据配置文件中的设置构建天气API请求URL。
     */
    QString getApiUrl();
    
    /**
     * @brief 解析天气JSON数据（新版本）
     * @param rawData 原始JSON字节数据
     */
    void parseWeatherJsonDataNew(QByteArray rawData);
    
    /**
     * @brief 更新用户界面显示
     */
    void updateUI();
    
    /**
     * @brief 绘制高温曲线图
     */
    void drawTempLineHigh();
    
    /**
     * @brief 绘制低温曲线图
     */
    void drawTempLineLow();
};
#endif // WIDGET_H
