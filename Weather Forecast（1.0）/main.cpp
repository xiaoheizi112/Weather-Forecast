/**
 * @file main.cpp
 * @brief 天气预报应用程序的主入口文件
 * @author Weather Forecast Team
 * @date 2025
 * 
 * 这是一个基于Qt框架开发的天气预报桌面应用程序的主函数文件。
 * 程序提供实时天气查询、多日天气预报、城市搜索等功能。
 */

#include "widget.h"     // 引入主窗口类定义

#include <QApplication>  // 引入Qt应用程序类

/**
 * @brief 程序主入口函数
 * @param argc 命令行参数个数
 * @param argv 命令行参数数组
 * @return 程序退出状态码
 * 
 * 该函数是整个天气预报应用程序的启动入口点，负责：
 * 1. 初始化Qt应用程序环境
 * 2. 创建主窗口实例
 * 3. 显示主窗口界面
 * 4. 启动Qt事件循环，等待用户交互
 */
int main(int argc, char *argv[])
{
    // 创建QApplication对象，初始化Qt应用程序环境
    // 处理命令行参数，设置应用程序的基本属性
    QApplication a(argc, argv);
    
    // 创建主窗口Widget实例
    // Widget类继承自QWidget，是应用程序的主界面容器
    Widget w;
    
    // 显示主窗口
    // 调用show()方法使窗口可见，用户可以看到应用程序界面
    w.show();
    
    // 启动Qt事件循环
    // exec()方法开始处理用户输入、网络请求、定时器等各种事件
    // 程序将在此处等待，直到用户关闭应用程序
    return a.exec();
}
