/**
 * @file widget.cpp
 * @brief 天气预报应用程序主窗口类的实现文件
 * @author Weather Forecast Team
 * @date 2024
 * 
 * 该文件实现了Widget类的所有功能，包括：
 * - 用户界面的初始化和配置
 * - 网络请求的发送和数据接收
 * - JSON天气数据的解析和处理
 * - 用户交互事件的响应（鼠标拖拽、城市搜索）
 * - 温度曲线图的绘制
 * - 天气图标和信息的动态更新
 */

#include "widget.h"        // 主窗口类头文件
#include "ui_widget.h"     // UI界面头文件

// Qt事件和界面相关头文件
#include <QMouseEvent>      // 鼠标事件处理
#include <QDebug>           // 调试输出
#include <QMessageBox>      // 消息框组件
#include <QPainter>         // 绘图组件

// Qt JSON数据处理相关头文件
#include <QJsonDocument>    // JSON文档解析
#include <QJsonObject>      // JSON对象操作
#include <QJsonArray>       // JSON数组操作

/**
 * @brief Widget类构造函数
 * @param parent 父窗口指针
 * 
 * 构造函数负责初始化整个天气预报应用程序的主窗口，包括：
 * 1. UI界面的创建和配置
 * 2. 窗口属性的设置（大小、边框等）
 * 3. 右键菜单的创建
 * 4. 网络管理器的初始化
 * 5. 控件列表的初始化
 * 6. 天气类型图标映射的建立
 * 7. 事件过滤器的安装
 */
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // 初始化UI界面，加载.ui文件中定义的界面布局
    ui->setupUi(this);
    
    // 设置窗口的固定尺寸为550x990像素，防止用户调整窗口大小
    setFixedSize(550,990);
    
    // 去除窗口边框，创建无边框窗口以实现自定义外观
    setWindowFlag(Qt::FramelessWindowHint);

    // ========== 右键菜单初始化 ==========
    // 创建右键退出菜单，当用户右键点击窗口时显示
    menuQuit = new QMenu (this);
    
    // 设置菜单项的样式，将文字颜色设置为黑色以提高可读性
    menuQuit->setStyleSheet("QMenu::item{color:black}");
    
    // 创建"退出"菜单项，设置图标和显示文本
    QAction *closeAct = new QAction (QIcon (":/weather_1/close.png"), tr ("退出"), this);
    
    // 将"退出"动作添加到右键菜单中
    menuQuit->addAction (closeAct);

    // 连接菜单的triggered信号到Lambda表达式槽函数
    // 当用户点击"退出"菜单项时，关闭应用程序窗口
    connect (menuQuit,&QMenu::triggered,this,[=]{
        this->close ();
    });

    // ========== 网络管理器初始化 ==========
    // 创建网络访问管理器，用于处理HTTP请求，生命周期跟随当前对象
    manager = new QNetworkAccessManager(this);

    // 设置天气API的基础URL，包含API密钥和版本信息
    // 使用天气API服务获取实时天气数据和预报信息
    strUrl = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=29132936&appsecret=JV3FYmaV";
    QUrl urlTianQi(strUrl);

    // 创建网络请求对象，设置请求的目标URL
    QNetworkRequest res(urlTianQi);

    // 发起GET请求获取默认城市的天气数据
    // reply对象用于接收服务器响应
    reply = manager->get(res);

    // 连接网络管理器的finished信号到数据处理槽函数
    // 当网络请求完成时，自动调用readHttpReply函数处理返回的数据
    connect(manager, &QNetworkAccessManager::finished, this, &Widget::readHttpReply);

    // ========== UI控件列表初始化 ==========
    // 初始化各种天气信息显示控件的列表，便于批量操作和数据更新
    
    // 星期显示标签列表（今天到未来5天）
    mWeekList<<ui->labelDay0<<ui->labelDay1
            <<ui->labelDay2<<ui->labelDay3
           <<ui->labelDay4<<ui->labelDay5;

    // 日期显示标签列表（今天到未来5天的具体日期）
    mDateList<<ui->labelDate0<<ui->labelDate1
            <<ui->labelDate2<<ui->labelDate3
           <<ui->labelDate4<<ui->labelDate5;

    // 天气图标显示标签列表（显示各天的天气图标）
    mIconList<<ui->labelWeatherkon0<<ui->labelWeatherkon1
            <<ui->labelWeatherkon2<<ui->labelWeatherkon3
           <<ui->labelWeatherkon4<<ui->labelWeatherkon5;

    // 天气类型文字描述标签列表（晴、多云、雨等）
    mWeaTypeList<<ui->labelWeatherTypeDate0<<ui->labelWeatherTypeDate1
               <<ui->labelWeatherTypeDate2<<ui->labelWeatherTypeDate3
              <<ui->labelWeatherTypeDate4<<ui->labelWeatherTypeDate5;

    // 空气质量显示标签列表
    mAirqList<<ui->labelAirQ0<<ui->labelAirQ1
            <<ui->labelAirQ2<<ui->labelAirQ3
           <<ui->labelAirQ4<<ui->labelAirQ5;

    // 风向显示标签列表（东风、西风等）
    mFxList<<ui->labelFX0<<ui->labelFX1
          <<ui->labelFX2<<ui->labelFX3
         <<ui->labelFX4<<ui->labelFX5;

    // 风力等级显示标签列表（1级、2级等）
    mFlList<<ui->labelFL0<<ui->labelFL1
          <<ui->labelFL2<<ui->labelFL3
         <<ui->labelFL4<<ui->labelFL5;

    //根据keys,设置icon的路径
    mTypeMap.insert("暴雪",":/type/BaoXue.png");
    mTypeMap.insert("暴雨",":/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨",":/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨",":/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪",":/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪",":/type/DaXue.png");
    mTypeMap.insert("大雨",":/type/DaYu.png");
    mTypeMap.insert("冻雨",":/type/DongYu.png");
    mTypeMap.insert("多云",":/type/DuoYun.png");
    mTypeMap.insert("浮沉",":/type/FuChen.png");
    mTypeMap.insert("雷阵雨",":/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined",":/type/undefined.png");
    mTypeMap.insert("雾",":/type/Wu.png");
    mTypeMap.insert("小到中雪",":/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪",":/type/XiaoXue.png");
    mTypeMap.insert("小雨",":/type/XiaoYu.png");
    mTypeMap.insert("雪",":/type/Xue.png");
    mTypeMap.insert("扬沙",":/type/YangSha.png");
    mTypeMap.insert("阴",":/type/Yin.png");
    mTypeMap.insert("雨",":/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨",":/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪",":/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/type/ZhongYu.png");

    ui->widget0404->installEventFilter(this);
    ui->widget0405->installEventFilter(this);
}
/*
  QNetworkAccessManager *manager = new QNetworkAccessManager(this);
  connect(manager, &QNetworkAccessManager::finished,
          this, &MyClass::replyFinished);

  manager->get(QNetworkRequest(QUrl("http://qt-project.org")));
*/
/**
 * @brief Widget类析构函数
 * 
 * 清理UI对象，释放动态分配的内存资源。
 */
Widget::~Widget()
{
    delete ui;
}

/**
 * @brief 鼠标按下事件处理函数
 * @param event 鼠标事件对象，包含按键信息和坐标
 * 
 * 重写QWidget的虚函数，处理鼠标按下事件：
 * - 右键按下：在鼠标位置显示退出菜单
 * - 左键按下：记录鼠标相对窗口的偏移量，为窗口拖拽做准备
 */
void Widget::mousePressEvent (QMouseEvent *event)
{
    // 处理鼠标右键按下事件
    if (event->button () == Qt::RightButton)
    {
        // 在鼠标当前位置显示退出菜单
        // QCursor::pos()获取鼠标在屏幕上的全局坐标
        menuQuit->exec (QCursor::pos ());
    }

    // 处理鼠标左键按下事件，为窗口拖拽做准备
    if (event->button() == Qt::LeftButton)
    {
        // 计算并记录鼠标光标相对于窗口左上角的偏移量
        // 这个偏移量在后续的鼠标移动事件中使用，确保拖拽时窗口位置正确
        // event->globalPos(): 鼠标在屏幕上的全局坐标
        // this->pos(): 窗口左上角在屏幕上的坐标
        mOffset = event->globalPos() - this->pos();
    }
}
/**
 * @brief 鼠标移动事件处理函数
 * @param event 鼠标事件对象，包含当前鼠标坐标
 * 
 * 重写QWidget的虚函数，实现窗口拖拽功能。
 * 当鼠标左键按下后移动时，根据之前记录的偏移量更新窗口位置，
 * 保持鼠标在窗口上的相对位置不变，实现平滑的拖拽效果。
 */
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    // 根据鼠标当前位置和之前记录的偏移量计算窗口新位置
    // event->globalPos(): 鼠标在屏幕上的当前全局坐标
    // mOffset: 鼠标按下时相对于窗口左上角的偏移量
    // 通过 globalPos - mOffset 确保窗口跟随鼠标移动，同时保持相对位置不变
    this->move(event->globalPos() - mOffset);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget0404 && event->type() == QEvent::Paint)
    {
        drawTempLineHigh();
        return true;
    }
    if(watched == ui->widget0405 && event->type() == QEvent::Paint)
    {
        drawTempLineLow();
        return true;
    }
    return QWidget::eventFilter(watched,event);
}



void Widget::parseWeatherJsonData(QByteArray rawData)
{
    QJsonDocument jsonObj = QJsonDocument::fromJson(rawData);
    if(!jsonObj.isNull() && jsonObj.isObject())
    {
        QJsonObject objRoot = jsonObj.object();
        //解析日期
        QString date = objRoot["date"].toString();
        QString week = objRoot["week"].toString();
        ui->labelCurrentDate->setText(date+"  "+week);
        //解析城市名称
        QString cityname = objRoot["city"].toString();
        ui->labelCity->setText(cityname+"市");
        //解析当前温度
        QString currentTemp = objRoot["tem"].toString();
        ui->labelTmp->setText(currentTemp+"℃");
        ui->labelTempRange->setText(objRoot["tem2"].toString()+"~"
                +objRoot["tem1"].toString()+"℃");
        //解析天气类型
        ui->labelWeatherType->setText(objRoot["wea"].toString());

        ui->labelWeatherIcon->setMaximumSize(170,150);
        ui->labelWeatherIcon->setPixmap(mTypeMap[objRoot["wea"].toString()]);
        //感冒指数
        ui->labelGanbao->setText(objRoot["air_tips"].toString());
        //风向
        ui->labelFXType->setText(objRoot["win"].toString());
        //风力
        ui->labelFXData->setText(objRoot["win_speed"].toString());
        //PM2.5
        ui->labelPM25Data->setText(objRoot["air_pm25"].toString());
        //湿度
        ui->labelShiDuType->setText(objRoot["humidity"].toString());
        //空气质量
        ui->labelAirQualityData->setText(objRoot["air_level"].toString());


    }
}

void Widget::parseWeatherJsonDataNew(QByteArray rawData)
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(rawData);
    if(!jsonDoc.isNull() && jsonDoc.isObject())
    {
        QJsonObject jsonRoot = jsonDoc.object();
        days[0].mCity = jsonRoot["city"].toString();
        days[0].mPm25 = jsonRoot["aqi"].toObject()["pm25"].toString();
        if(jsonRoot.contains("data") && jsonRoot["data"].isArray())
        {
            QJsonArray weaArray = jsonRoot["data"].toArray();
            for(int i = 0;i < weaArray.size();i++)
            {
                QJsonObject obj = weaArray[i].toObject();
                //qDebug()<<obj["date"].toString()<<obj["wea"].toString();
                days[i].mDate = obj["date"].toString();
                days[i].mWeek = obj["week"].toString();
                days[i].mWeathType = obj["wea"].toString();
                days[i].mTemp = obj["tem"].toString();
                days[i].mTempLow = obj["tem2"].toString();
                days[i].mTempHigh = obj["tem1"].toString();
                days[i].mFx = obj["win"].toArray()[0].toString();
                days[i].mFl = obj["win_speed"].toString();
                days[i].mAirq = obj["air_level"].toString();
                days[i].mTips = obj["index"].toArray()[3].toObject()["desc"].toString();
                days[i].mHu = obj["humidity"].toString();
            }
            updateUI();
        }
    }
}

void Widget::updateUI()
{
    QPixmap pixmap;
    //解析日期
    ui->labelCurrentDate->setText(days[0].mDate+"  "+days[0].mWeek);
    //解析城市名称
    ui->labelCity->setText(days[0].mCity+"市");
    //解析当前温度
    ui->labelTmp->setText(days[0].mTemp+"℃");
    ui->labelTempRange->setText(days[0].mTempLow+"℃"+"~"
            +days[0].mTempHigh+"℃");
    //解析天气类型
    ui->labelWeatherType->setText(days[0].mWeathType);
    ui->labelWeatherIcon->setPixmap(mTypeMap[days[0].mWeathType]);
    //感冒指数
    ui->labelGanbao->setText(days[0].mTips);
    //风向
    ui->labelFXType->setText(days[0].mFx);
    //风力
    ui->labelFXData->setText(days[0].mFl);
    //PM2.5
    ui->labelPM25Data->setText(days[0].mPm25);
    //湿度
    ui->labelShiDuData->setText(days[0].mHu);
    //空气质量
    ui->labelAirQualityData->setText(days[0].mAirq);

    for(int i=0 ;i < 6;i++)
    {
        mWeekList[i]->setText(days[i].mWeek);
        mWeekList[0]->setText("今天");
        mWeekList[1]->setText("明天");
        mWeekList[2]->setText("后天");
        QStringList dayList = days[i].mDate.split("-");
        mDateList[i]->setText(dayList.at(1)+"-"+dayList.at(2));

        int index = days[i].mWeathType.indexOf("转");
        if(index!=-1)
        {
            pixmap = mTypeMap[days[i].mWeathType.right(index)];
        }
        else
        {
            pixmap = mTypeMap[days[i].mWeathType];
        }
        pixmap = mTypeMap[days[i].mWeathType];
        pixmap = pixmap.scaled(mIconList[i]->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation);
        mIconList[i]->setMaximumSize(78,62);
        mIconList[i]->setPixmap(mTypeMap[days[i].mWeathType]);
        mWeaTypeList[i]->setText(days[i].mWeathType);

        QString airQ = days[i].mAirq;
        mAirqList[i]->setText(airQ);
        if(airQ == "优")
        {
             mAirqList[i]->setStyleSheet("background-color: rgb(150,213,32);border-radius:7px;color:rgb(255,255,255)");
        }
        if(airQ == "良")
        {
             mAirqList[i]->setStyleSheet("background-color: rgb(255,170,127);border-radius:7px;color:rgb(255,255,255)");
        }
        if(airQ == "轻度")
        {
             mAirqList[i]->setStyleSheet("background-color: rgb(255,199,199);border-radius:7px;color:rgb(255,255,255)");
        }
        if(airQ == "中度")
        {
             mAirqList[i]->setStyleSheet("background-color: rgb(255,17,17);border-radius:7px;color:rgb(255,255,255)");
        }
        if(airQ == "重度")
        {
             mAirqList[i]->setStyleSheet("background-color: rgb(153,0,0);border-radius:7px;color:rgb(255,255,255)");
        }
        mFxList[i]->setText(days[i].mFx);
        mFlList[i]->setText(days[i].mFl);
    }
    update();
}

void Widget::drawTempLineHigh()
{
    QPainter painter(ui->widget0404);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(Qt::yellow);
    painter.setBrush(Qt::yellow);

    int ave;
    int sum = 0;
    int offSet = 0;
    int middle = ui->widget0404->height()/2;
    for(int i = 0;i < 6;i++)
    {
        sum += days[i].mTempHigh.toInt();
    }
    ave = sum/6;

    QPoint points[6];
    for(int i = 0;i < 6;i++)
    {
        points[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
        offSet = (days[i].mTempHigh.toInt()-ave)*3;
        points[i].setY(middle-offSet);

        painter.drawEllipse(QPoint(points[i]),3,3);

        painter.drawText(points[i].x()-10,points[i].y()-10,days[i].mTempHigh+"°");
    }
    for(int i = 0;i < 5;i++)
    {
        painter.drawLine(points[i],points[i+1]);
    }
    //painter.drawLine(QPoint(10,10),QPoint(30,30));
}

void Widget::drawTempLineLow()
{
    QPainter painter(ui->widget0405);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(Qt::blue);
    painter.setBrush(Qt::blue);

    int ave;
    int sum = 0;
    int offSet = 0;
    int middle = ui->widget0405->height()/2;
    for(int i = 0;i < 6;i++)
    {
        sum += days[i].mTempLow.toInt();
    }
    ave = sum/6;

    QPoint points[6];
    for(int i = 0;i < 6;i++)
    {
        points[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
        offSet = (days[i].mTempLow.toInt()-ave)*3;
        points[i].setY(middle-offSet);

        painter.drawEllipse(QPoint(points[i]),3,3);

        painter.drawText(points[i].x()-10,points[i].y()-10,days[i].mTempLow+"°");
    }
    for(int i = 0;i < 5;i++)
    {
        painter.drawLine(points[i],points[i+1]);
    }
}

/**
 * @brief 网络请求响应处理槽函数
 * @param reply 网络响应对象，包含服务器返回的数据和状态信息
 * 
 * 当网络请求完成时被自动调用，负责：
 * 1. 检查HTTP响应状态码和网络错误
 * 2. 读取服务器返回的JSON天气数据
 * 3. 调用数据解析函数处理天气信息
 * 4. 处理网络错误并向用户显示错误信息
 */
void Widget::readHttpReply(QNetworkReply *reply)
{
    // 获取HTTP响应状态码（200=成功，404=未找到，500=服务器错误等）
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    // 输出状态码到调试控制台，便于开发调试
    qDebug()<<resCode;

    // 检查网络请求是否成功：无网络错误且HTTP状态码为200
    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        // 一次性读取服务器返回的全部JSON数据
        QByteArray data = reply->readAll();

        // 调用新版本的JSON数据解析函数处理天气数据
        // parseWeatherJsonData(data);  // 旧版本解析函数（已弃用）
        parseWeatherJsonDataNew(data);

        // 调试用：打印原始JSON数据（已注释）
        // qDebug() << QString::fromUtf8(data);
    }
    else
    {
        // 处理网络请求失败的情况
        
        // 创建错误消息框向用户显示网络错误
        QMessageBox mes;
        
        // 设置消息框标题
        mes.setWindowTitle("错误");
        
        // 设置错误提示文本
        mes.setText("网络请求失败");
        
        // 设置按钮样式，使用红色文字突出错误状态
        mes.setStyleSheet("QPushButton {color:red}");
        
        // 添加"确定"按钮
        mes.setStandardButtons(QMessageBox::Ok);
        
        // 以模态方式显示消息框，阻塞用户操作直到点击按钮
        mes.exec();
    }
}

void Widget::on_LineEditCity_clicked()
{
    // 从UI的lineEditCity控件中获取用户输入的城市名称
    QString cityNameFromUser = ui->lineEditCity->text();

    // 调用自定义函数，根据用户输入的城市名称获取对应的城市编码
    QString cityCode = cityCodeUtils.getCityCodeFromName(cityNameFromUser);

    // 检查是否成功获取到城市编码（不为空字符串）
    // 注意：QString判断非空应使用isEmpty()，原代码中!=NULL的写法不规范但可运行
    if(cityCode != NULL)
    {
        // 将城市编码拼接到底层URL字符串中，形成完整请求参数
        strUrl += "&cityid="+cityCode;

        // 通过网络管理器发送GET请求，请求地址为拼接后的完整URL
        manager->get(QNetworkRequest(QUrl(strUrl)));
    }
    else
    {
        // 创建QMessageBox实例，用于显示错误信息
        QMessageBox mes;
        // 设置消息框的标题为"错误"
        mes.setWindowTitle("错误");
        // 设置消息框的显示文本为"请输入正确的城市名称"
        mes.setText("请输入正确的城市名称");
        // 为消息框中的按钮设置样式表，文字颜色为红色
        mes.setStyleSheet("QPushButton {color:red}");
        // 设置消息框的标准按钮为"确定"按钮
        mes.setStandardButtons(QMessageBox::Ok);
        // 以模态方式显示消息框，等待用户点击按钮
        mes.exec();
    }
}

void Widget::on_lineEditCity_returnPressed()
{
    on_LineEditCity_clicked();
}
