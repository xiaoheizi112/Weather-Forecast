/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget01;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditCity;
    QPushButton *LineEditCity;
    QLabel *labelCurrentDate;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelWeatherIcon;
    QGridLayout *gridLayout_3;
    QLabel *labelTempRange;
    QLabel *labelWeatherType;
    QLabel *labelTmp;
    QLabel *labelCity;
    QSpacerItem *horizontalSpacer;
    QWidget *widget03;
    QGridLayout *gridLayout;
    QLabel *labelGanbao;
    QWidget *widget0301;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFX;
    QVBoxLayout *verticalLayout;
    QLabel *labelFXType;
    QLabel *labelFXData;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelPM25;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelPM25Type;
    QLabel *labelPM25Data;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelShiDu;
    QVBoxLayout *verticalLayout_13;
    QLabel *labelShiDuType;
    QLabel *labelShiDuData;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelAirQuality;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelAirQualityType;
    QLabel *labelAirQualityData;
    QWidget *widget04;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget0401;
    QGridLayout *gridLayout_5;
    QLabel *labelDay1;
    QLabel *labelDay5;
    QLabel *labelDate5;
    QLabel *labelDay4;
    QLabel *labelDate2;
    QLabel *labelDate0;
    QLabel *labelDay0;
    QLabel *labelDay2;
    QLabel *labelDay3;
    QLabel *labelDate1;
    QLabel *labelDate3;
    QLabel *labelDate4;
    QWidget *widget0402;
    QGridLayout *gridLayout_6;
    QLabel *labelWeatherkon0;
    QLabel *labelWeatherkon1;
    QLabel *labelWeatherkon2;
    QLabel *labelWeatherkon3;
    QLabel *labelWeatherkon4;
    QLabel *labelWeatherkon5;
    QLabel *labelWeatherTypeDate0;
    QLabel *labelWeatherTypeDate1;
    QLabel *labelWeatherTypeDate2;
    QLabel *labelWeatherTypeDate3;
    QLabel *labelWeatherTypeDate4;
    QLabel *labelWeatherTypeDate5;
    QWidget *widget0403;
    QGridLayout *gridLayout_4;
    QLabel *labelAirQ0;
    QLabel *labelAirQ1;
    QLabel *labelAirQ2;
    QLabel *labelAirQ3;
    QLabel *labelAirQ4;
    QLabel *labelAirQ5;
    QWidget *widget0404;
    QWidget *widget0405;
    QWidget *widget0406;
    QGridLayout *gridLayout_7;
    QLabel *labelFX0;
    QLabel *labelFX1;
    QLabel *labelFX2;
    QLabel *labelFX3;
    QLabel *labelFX4;
    QLabel *labelFX5;
    QLabel *labelFL0;
    QLabel *labelFL1;
    QLabel *labelFL2;
    QLabel *labelFL3;
    QLabel *labelFL4;
    QLabel *labelFL5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(550, 990);
        Widget->setMinimumSize(QSize(400, 600));
        Widget->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #87CEEB, stop:0.5 #98D8E8, stop:1 #B0E0E6);\n"
"   border-radius: 15px;"));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget01 = new QWidget(Widget);
        widget01->setObjectName(QString::fromUtf8("widget01"));
        widget01->setMinimumSize(QSize(500, 70));
        widget01->setMaximumSize(QSize(550, 70));
        layoutWidget = new QWidget(widget01);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 15, 521, 40));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditCity = new QLineEdit(layoutWidget);
        lineEditCity->setObjectName(QString::fromUtf8("lineEditCity"));
        lineEditCity->setMaximumSize(QSize(200, 50));
        QFont font;
        lineEditCity->setFont(font);
        lineEditCity->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"      border: 2px solid rgba(255, 255, 255, 0.3);\n"
"      border-radius: 15px;\n"
"      padding: 8px 15px;\n"
"      background: rgba(255, 255, 255, 0.9);\n"
"      color: #333;\n"
"      font-size: 12px;\n"
"      selection-background-color: #87CEEB;\n"
"  }\n"
"  QLineEdit:focus {\n"
"      border: 2px solid rgba(135, 206, 235, 0.8);\n"
"      background: rgba(255, 255, 255, 1.0);\n"
"  }\n"
"  QLineEdit:hover {\n"
"      border: 2px solid rgba(135, 206, 235, 0.5);\n"
"  }"));

        horizontalLayout_2->addWidget(lineEditCity);

        LineEditCity = new QPushButton(layoutWidget);
        LineEditCity->setObjectName(QString::fromUtf8("LineEditCity"));
        LineEditCity->setMaximumSize(QSize(30, 30));
        LineEditCity->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"      border-radius: 15px;\n"
"      background: rgba(255, 255, 255, 0.8);\n"
"      border: 2px solid rgba(135, 206, 235, 0.3);\n"
"      padding: 5px;\n"
"  }\n"
"  QPushButton:hover {\n"
"      background: rgba(135, 206, 235, 0.2);\n"
"      border: 2px solid rgba(135, 206, 235, 0.6);\n"
"      transform: scale(1.05);\n"
"  }\n"
"  QPushButton:pressed {\n"
"      background: rgba(135, 206, 235, 0.4);\n"
"      transform: scale(0.95);\n"
"  }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/weather_1/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        LineEditCity->setIcon(icon);

        horizontalLayout_2->addWidget(LineEditCity);

        labelCurrentDate = new QLabel(layoutWidget);
        labelCurrentDate->setObjectName(QString::fromUtf8("labelCurrentDate"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(12);
        font1.setItalic(false);
        labelCurrentDate->setFont(font1);
        labelCurrentDate->setLayoutDirection(Qt::LeftToRight);
        labelCurrentDate->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);"));
        labelCurrentDate->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelCurrentDate);


        verticalLayout_3->addWidget(widget01);

        widget02 = new QWidget(Widget);
        widget02->setObjectName(QString::fromUtf8("widget02"));
        widget02->setMinimumSize(QSize(500, 170));
        widget02->setMaximumSize(QSize(550, 170));
        widget02->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.08);\n"
"border: 1px solid rgba(255, 255, 255, 0.15);\n"
"border-radius: 20px;\n"
"backdrop-filter: blur(12px);\n"
"padding: 15px;"));
        horizontalLayout_14 = new QHBoxLayout(widget02);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        labelWeatherIcon = new QLabel(widget02);
        labelWeatherIcon->setObjectName(QString::fromUtf8("labelWeatherIcon"));
        labelWeatherIcon->setMinimumSize(QSize(170, 150));
        labelWeatherIcon->setMaximumSize(QSize(170, 150));
        labelWeatherIcon->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 2px solid rgba(255, 255, 255, 0.1);\n"
"border-radius: 15px;\n"
"padding: 10px;"));
        labelWeatherIcon->setPixmap(QPixmap(QString::fromUtf8(":/type/qingtian.png")));
        labelWeatherIcon->setScaledContents(true);

        horizontalLayout_13->addWidget(labelWeatherIcon);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelTempRange = new QLabel(widget02);
        labelTempRange->setObjectName(QString::fromUtf8("labelTempRange"));
        labelTempRange->setMinimumSize(QSize(240, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        labelTempRange->setFont(font2);
        labelTempRange->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.85);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"background: rgba(255, 255, 255, 0.03);\n"
"border-radius: 8px;\n"
"padding: 6px 12px;"));
        labelTempRange->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelTempRange, 1, 1, 1, 1);

        labelWeatherType = new QLabel(widget02);
        labelWeatherType->setObjectName(QString::fromUtf8("labelWeatherType"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        labelWeatherType->setFont(font3);
        labelWeatherType->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.2);\n"
"background: rgba(255, 255, 255, 0.03);\n"
"border-radius: 8px;\n"
"padding: 6px 12px;"));

        gridLayout_3->addWidget(labelWeatherType, 1, 0, 1, 1);

        labelTmp = new QLabel(widget02);
        labelTmp->setObjectName(QString::fromUtf8("labelTmp"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setWeight(75);
        labelTmp->setFont(font4);
        labelTmp->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3);\n"
"background: rgba(255, 255, 255, 0.05);\n"
"border-radius: 12px;\n"
"padding: 8px;"));
        labelTmp->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelTmp, 0, 0, 1, 2);

        labelCity = new QLabel(widget02);
        labelCity->setObjectName(QString::fromUtf8("labelCity"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        labelCity->setFont(font5);
        labelCity->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3);\n"
"background: rgba(255, 255, 255, 0.08);\n"
"border: 1px solid rgba(255, 255, 255, 0.15);\n"
"border-radius: 10px;\n"
"padding: 8px 16px;"));

        gridLayout_3->addWidget(labelCity, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);


        horizontalLayout_13->addLayout(gridLayout_3);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_3->addWidget(widget02);

        widget03 = new QWidget(Widget);
        widget03->setObjectName(QString::fromUtf8("widget03"));
        widget03->setMinimumSize(QSize(500, 220));
        widget03->setMaximumSize(QSize(550, 220));
        QFont font6;
        font6.setPointSize(8);
        widget03->setFont(font6);
        widget03->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);"));
        gridLayout = new QGridLayout(widget03);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 9, 20, -1);
        labelGanbao = new QLabel(widget03);
        labelGanbao->setObjectName(QString::fromUtf8("labelGanbao"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Agency FB"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        labelGanbao->setFont(font7);
        labelGanbao->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(labelGanbao, 0, 0, 1, 1);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName(QString::fromUtf8("widget0301"));
        widget0301->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.15);\n"
"border-radius: 20px;\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid rgba(255, 255, 255, 0.2);\n"
"backdrop-filter: blur(10px);"));
        gridLayout_2 = new QGridLayout(widget0301);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(60);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(40, 40, 40, 40);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelFX = new QLabel(widget0301);
        labelFX->setObjectName(QString::fromUtf8("labelFX"));
        labelFX->setMinimumSize(QSize(55, 55));
        labelFX->setMaximumSize(QSize(55, 55));
        labelFX->setStyleSheet(QString::fromUtf8("border: 7px solid rgba(255, 255, 255, 0.3);\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgba(255, 255, 255, 0.1);\n"
"transition: all 0.3s ease;"));
        labelFX->setPixmap(QPixmap(QString::fromUtf8(":/weather_1/wind.png")));
        labelFX->setScaledContents(true);

        horizontalLayout->addWidget(labelFX);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelFXType = new QLabel(widget0301);
        labelFXType->setObjectName(QString::fromUtf8("labelFXType"));
        labelFXType->setMinimumSize(QSize(80, 25));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setWeight(75);
        labelFXType->setFont(font8);
        labelFXType->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelFXType->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelFXType);

        labelFXData = new QLabel(widget0301);
        labelFXData->setObjectName(QString::fromUtf8("labelFXData"));
        labelFXData->setMinimumSize(QSize(80, 25));
        QFont font9;
        font9.setPointSize(11);
        labelFXData->setFont(font9);
        labelFXData->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.8);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelFXData->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelFXData);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelPM25 = new QLabel(widget0301);
        labelPM25->setObjectName(QString::fromUtf8("labelPM25"));
        labelPM25->setMinimumSize(QSize(55, 55));
        labelPM25->setMaximumSize(QSize(55, 55));
        labelPM25->setStyleSheet(QString::fromUtf8("border: 7px solid rgba(255, 255, 255, 0.3);\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgba(255, 255, 255, 0.1);\n"
"transition: all 0.3s ease;"));
        labelPM25->setPixmap(QPixmap(QString::fromUtf8(":/weather_1/pm25.png")));
        labelPM25->setScaledContents(true);

        horizontalLayout_10->addWidget(labelPM25);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(12);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        labelPM25Type = new QLabel(widget0301);
        labelPM25Type->setObjectName(QString::fromUtf8("labelPM25Type"));
        labelPM25Type->setMinimumSize(QSize(80, 25));
        labelPM25Type->setFont(font8);
        labelPM25Type->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelPM25Type->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(labelPM25Type);

        labelPM25Data = new QLabel(widget0301);
        labelPM25Data->setObjectName(QString::fromUtf8("labelPM25Data"));
        labelPM25Data->setMinimumSize(QSize(80, 25));
        labelPM25Data->setFont(font9);
        labelPM25Data->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.8);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelPM25Data->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(labelPM25Data);


        horizontalLayout_10->addLayout(verticalLayout_11);


        gridLayout_2->addLayout(horizontalLayout_10, 0, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(20);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        labelShiDu = new QLabel(widget0301);
        labelShiDu->setObjectName(QString::fromUtf8("labelShiDu"));
        labelShiDu->setMinimumSize(QSize(55, 55));
        labelShiDu->setMaximumSize(QSize(55, 55));
        labelShiDu->setStyleSheet(QString::fromUtf8("border: 7px solid rgba(255, 255, 255, 0.3);\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgba(255, 255, 255, 0.1);\n"
"transition: all 0.3s ease;"));
        labelShiDu->setPixmap(QPixmap(QString::fromUtf8(":/weather_1/humidity.png")));
        labelShiDu->setScaledContents(true);

        horizontalLayout_12->addWidget(labelShiDu);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(12);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        labelShiDuType = new QLabel(widget0301);
        labelShiDuType->setObjectName(QString::fromUtf8("labelShiDuType"));
        labelShiDuType->setMinimumSize(QSize(80, 25));
        labelShiDuType->setFont(font8);
        labelShiDuType->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelShiDuType->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(labelShiDuType);

        labelShiDuData = new QLabel(widget0301);
        labelShiDuData->setObjectName(QString::fromUtf8("labelShiDuData"));
        labelShiDuData->setMinimumSize(QSize(80, 25));
        labelShiDuData->setFont(font9);
        labelShiDuData->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.8);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelShiDuData->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(labelShiDuData);


        horizontalLayout_12->addLayout(verticalLayout_13);


        gridLayout_2->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(20);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        labelAirQuality = new QLabel(widget0301);
        labelAirQuality->setObjectName(QString::fromUtf8("labelAirQuality"));
        labelAirQuality->setMinimumSize(QSize(55, 55));
        labelAirQuality->setMaximumSize(QSize(55, 55));
        labelAirQuality->setStyleSheet(QString::fromUtf8("border: 7px solid rgba(255, 255, 255, 0.3);\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgba(255, 255, 255, 0.1);\n"
"transition: all 0.3s ease;"));
        labelAirQuality->setPixmap(QPixmap(QString::fromUtf8(":/weather_1/airQi.png")));
        labelAirQuality->setScaledContents(true);

        horizontalLayout_11->addWidget(labelAirQuality);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(12);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        labelAirQualityType = new QLabel(widget0301);
        labelAirQualityType->setObjectName(QString::fromUtf8("labelAirQualityType"));
        labelAirQualityType->setMinimumSize(QSize(100, 25));
        labelAirQualityType->setFont(font8);
        labelAirQualityType->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.9);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelAirQualityType->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(labelAirQualityType);

        labelAirQualityData = new QLabel(widget0301);
        labelAirQualityData->setObjectName(QString::fromUtf8("labelAirQualityData"));
        labelAirQualityData->setMinimumSize(QSize(100, 25));
        labelAirQualityData->setFont(font9);
        labelAirQualityData->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.8);\n"
"text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.3);"));
        labelAirQualityData->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(labelAirQualityData);


        horizontalLayout_11->addLayout(verticalLayout_12);


        gridLayout_2->addLayout(horizontalLayout_11, 1, 1, 1, 1);


        gridLayout->addWidget(widget0301, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        verticalLayout_3->addWidget(widget03);

        widget04 = new QWidget(Widget);
        widget04->setObjectName(QString::fromUtf8("widget04"));
        widget04->setMinimumSize(QSize(500, 500));
        widget04->setMaximumSize(QSize(550, 500));
        verticalLayout_2 = new QVBoxLayout(widget04);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget0401 = new QWidget(widget04);
        widget0401->setObjectName(QString::fromUtf8("widget0401"));
        gridLayout_5 = new QGridLayout(widget0401);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(6);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(9, -1, 6, 4);
        labelDay1 = new QLabel(widget0401);
        labelDay1->setObjectName(QString::fromUtf8("labelDay1"));
        labelDay1->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"background: rgba(255, 255, 255, 0.15);\n"
"border: 1px solid rgba(255, 255, 255, 0.2);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"backdrop-filter: blur(8px);"));
        labelDay1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay1, 0, 1, 1, 1);

        labelDay5 = new QLabel(widget0401);
        labelDay5->setObjectName(QString::fromUtf8("labelDay5"));
        labelDay5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);\n"
"border: 1px solid rgba(255, 255, 255, 0.2);\n"
"backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelDay5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay5, 0, 5, 1, 1);

        labelDate5 = new QLabel(widget0401);
        labelDate5->setObjectName(QString::fromUtf8("labelDate5"));
        labelDate5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);\n"
"border: 1px solid rgba(255, 255, 255, 0.2);\n"
"backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate5, 1, 5, 1, 1);

        labelDay4 = new QLabel(widget0401);
        labelDay4->setObjectName(QString::fromUtf8("labelDay4"));
        labelDay4->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"background: rgba(255, 255, 255, 0.15);\n"
"border: 1px solid rgba(255, 255, 255, 0.2);\n"
"backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelDay4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay4, 0, 4, 1, 1);

        labelDate2 = new QLabel(widget0401);
        labelDate2->setObjectName(QString::fromUtf8("labelDate2"));
        labelDate2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate2, 1, 2, 1, 1);

        labelDate0 = new QLabel(widget0401);
        labelDate0->setObjectName(QString::fromUtf8("labelDate0"));
        labelDate0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate0, 1, 0, 1, 1);

        labelDay0 = new QLabel(widget0401);
        labelDay0->setObjectName(QString::fromUtf8("labelDay0"));
        labelDay0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelDay0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay0, 0, 0, 1, 1);

        labelDay2 = new QLabel(widget0401);
        labelDay2->setObjectName(QString::fromUtf8("labelDay2"));
        labelDay2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelDay2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay2, 0, 2, 1, 1);

        labelDay3 = new QLabel(widget0401);
        labelDay3->setObjectName(QString::fromUtf8("labelDay3"));
        labelDay3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelDay3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDay3, 0, 3, 1, 1);

        labelDate1 = new QLabel(widget0401);
        labelDate1->setObjectName(QString::fromUtf8("labelDate1"));
        labelDate1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate1, 1, 1, 1, 1);

        labelDate3 = new QLabel(widget0401);
        labelDate3->setObjectName(QString::fromUtf8("labelDate3"));
        labelDate3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate3, 1, 3, 1, 1);

        labelDate4 = new QLabel(widget0401);
        labelDate4->setObjectName(QString::fromUtf8("labelDate4"));
        labelDate4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.15);border: 1px solid rgba(255, 255, 255, 0.2);backdrop-filter: blur(8px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDate4, 1, 4, 1, 1);


        verticalLayout_2->addWidget(widget0401);

        widget0402 = new QWidget(widget04);
        widget0402->setObjectName(QString::fromUtf8("widget0402"));
        widget0402->setMaximumSize(QSize(16777215, 100));
        gridLayout_6 = new QGridLayout(widget0402);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(6);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(7, 9, -1, 9);
        labelWeatherkon0 = new QLabel(widget0402);
        labelWeatherkon0->setObjectName(QString::fromUtf8("labelWeatherkon0"));
        labelWeatherkon0->setMinimumSize(QSize(78, 62));
        labelWeatherkon0->setMaximumSize(QSize(78, 62));
        labelWeatherkon0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.12);\n"
"border: 1px solid rgba(255, 255, 255, 0.18);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon0->setScaledContents(true);
        labelWeatherkon0->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon0, 0, 0, 1, 1);

        labelWeatherkon1 = new QLabel(widget0402);
        labelWeatherkon1->setObjectName(QString::fromUtf8("labelWeatherkon1"));
        labelWeatherkon1->setMinimumSize(QSize(78, 62));
        labelWeatherkon1->setMaximumSize(QSize(78, 62));
        labelWeatherkon1->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"background: rgba(255, 255, 255, 0.12);\n"
"border: 1px solid rgba(255, 255, 255, 0.18);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon1->setScaledContents(true);
        labelWeatherkon1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon1, 0, 1, 1, 1);

        labelWeatherkon2 = new QLabel(widget0402);
        labelWeatherkon2->setObjectName(QString::fromUtf8("labelWeatherkon2"));
        labelWeatherkon2->setMinimumSize(QSize(78, 62));
        labelWeatherkon2->setMaximumSize(QSize(78, 62));
        labelWeatherkon2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon2->setScaledContents(true);
        labelWeatherkon2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon2, 0, 2, 1, 1);

        labelWeatherkon3 = new QLabel(widget0402);
        labelWeatherkon3->setObjectName(QString::fromUtf8("labelWeatherkon3"));
        labelWeatherkon3->setMinimumSize(QSize(78, 62));
        labelWeatherkon3->setMaximumSize(QSize(78, 62));
        labelWeatherkon3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon3->setScaledContents(true);
        labelWeatherkon3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon3, 0, 3, 1, 1);

        labelWeatherkon4 = new QLabel(widget0402);
        labelWeatherkon4->setObjectName(QString::fromUtf8("labelWeatherkon4"));
        labelWeatherkon4->setMinimumSize(QSize(78, 62));
        labelWeatherkon4->setMaximumSize(QSize(78, 62));
        labelWeatherkon4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon4->setScaledContents(true);
        labelWeatherkon4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon4, 0, 4, 1, 1);

        labelWeatherkon5 = new QLabel(widget0402);
        labelWeatherkon5->setObjectName(QString::fromUtf8("labelWeatherkon5"));
        labelWeatherkon5->setMinimumSize(QSize(78, 62));
        labelWeatherkon5->setMaximumSize(QSize(78, 62));
        labelWeatherkon5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelWeatherkon5->setScaledContents(true);
        labelWeatherkon5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherkon5, 0, 5, 1, 1);

        labelWeatherTypeDate0 = new QLabel(widget0402);
        labelWeatherTypeDate0->setObjectName(QString::fromUtf8("labelWeatherTypeDate0"));
        labelWeatherTypeDate0->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate0->setMaximumSize(QSize(78, 20));
        QFont font10;
        font10.setPointSize(7);
        labelWeatherTypeDate0->setFont(font10);
        labelWeatherTypeDate0->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate0->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate0, 1, 0, 1, 1);

        labelWeatherTypeDate1 = new QLabel(widget0402);
        labelWeatherTypeDate1->setObjectName(QString::fromUtf8("labelWeatherTypeDate1"));
        labelWeatherTypeDate1->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate1->setMaximumSize(QSize(78, 20));
        labelWeatherTypeDate1->setFont(font10);
        labelWeatherTypeDate1->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate1, 1, 1, 1, 1);

        labelWeatherTypeDate2 = new QLabel(widget0402);
        labelWeatherTypeDate2->setObjectName(QString::fromUtf8("labelWeatherTypeDate2"));
        labelWeatherTypeDate2->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate2->setMaximumSize(QSize(78, 20));
        labelWeatherTypeDate2->setFont(font10);
        labelWeatherTypeDate2->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate2, 1, 2, 1, 1);

        labelWeatherTypeDate3 = new QLabel(widget0402);
        labelWeatherTypeDate3->setObjectName(QString::fromUtf8("labelWeatherTypeDate3"));
        labelWeatherTypeDate3->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate3->setMaximumSize(QSize(78, 20));
        labelWeatherTypeDate3->setFont(font10);
        labelWeatherTypeDate3->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate3, 1, 3, 1, 1);

        labelWeatherTypeDate4 = new QLabel(widget0402);
        labelWeatherTypeDate4->setObjectName(QString::fromUtf8("labelWeatherTypeDate4"));
        labelWeatherTypeDate4->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate4->setMaximumSize(QSize(78, 20));
        labelWeatherTypeDate4->setFont(font10);
        labelWeatherTypeDate4->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate4, 1, 4, 1, 1);

        labelWeatherTypeDate5 = new QLabel(widget0402);
        labelWeatherTypeDate5->setObjectName(QString::fromUtf8("labelWeatherTypeDate5"));
        labelWeatherTypeDate5->setMinimumSize(QSize(78, 20));
        labelWeatherTypeDate5->setMaximumSize(QSize(78, 20));
        labelWeatherTypeDate5->setFont(font10);
        labelWeatherTypeDate5->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);border: 1px solid rgba(255, 255, 255, 0.18);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherTypeDate5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelWeatherTypeDate5, 1, 5, 1, 1);


        verticalLayout_2->addWidget(widget0402);

        widget0403 = new QWidget(widget04);
        widget0403->setObjectName(QString::fromUtf8("widget0403"));
        widget0403->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(widget0403);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(9);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(-1, -1, -1, 4);
        labelAirQ0 = new QLabel(widget0403);
        labelAirQ0->setObjectName(QString::fromUtf8("labelAirQ0"));
        labelAirQ0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(85, 255, 127, 0.25);\n"
"border: 1px solid rgba(85, 255, 127, 0.3);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ0, 0, 0, 1, 1);

        labelAirQ1 = new QLabel(widget0403);
        labelAirQ1->setObjectName(QString::fromUtf8("labelAirQ1"));
        labelAirQ1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 0, 0.25);\n"
"border: 1px solid rgba(255, 170, 0, 0.3);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ1, 0, 1, 1, 1);

        labelAirQ2 = new QLabel(widget0403);
        labelAirQ2->setObjectName(QString::fromUtf8("labelAirQ2"));
        labelAirQ2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(85, 255, 127, 0.25);border: 1px solid rgba(85, 255, 127, 0.3);backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ2, 0, 2, 1, 1);

        labelAirQ3 = new QLabel(widget0403);
        labelAirQ3->setObjectName(QString::fromUtf8("labelAirQ3"));
        labelAirQ3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(85, 255, 127, 0.25);border: 1px solid rgba(85, 255, 127, 0.3);backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ3, 0, 3, 1, 1);

        labelAirQ4 = new QLabel(widget0403);
        labelAirQ4->setObjectName(QString::fromUtf8("labelAirQ4"));
        labelAirQ4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(85, 255, 127, 0.25);border: 1px solid rgba(85, 255, 127, 0.3);backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ4, 0, 4, 1, 1);

        labelAirQ5 = new QLabel(widget0403);
        labelAirQ5->setObjectName(QString::fromUtf8("labelAirQ5"));
        labelAirQ5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(85, 255, 127, 0.25);border: 1px solid rgba(85, 255, 127, 0.3);backdrop-filter: blur(6px);\n"
"border-radius: 7px;"));
        labelAirQ5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelAirQ5, 0, 5, 1, 1);


        verticalLayout_2->addWidget(widget0403);

        widget0404 = new QWidget(widget04);
        widget0404->setObjectName(QString::fromUtf8("widget0404"));
        widget0404->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);\n"
"border-radius: 15px;\n"
"border: 1px solid rgba(255, 255, 255, 0.15);\n"
"backdrop-filter: blur(8px);"));

        verticalLayout_2->addWidget(widget0404);

        widget0405 = new QWidget(widget04);
        widget0405->setObjectName(QString::fromUtf8("widget0405"));
        widget0405->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.12);\n"
"border-radius: 15px;\n"
"border: 1px solid rgba(255, 255, 255, 0.15);\n"
"backdrop-filter: blur(8px);"));

        verticalLayout_2->addWidget(widget0405);

        widget0406 = new QWidget(widget04);
        widget0406->setObjectName(QString::fromUtf8("widget0406"));
        widget0406->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_7 = new QGridLayout(widget0406);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(-1, -1, -1, 4);
        labelFX0 = new QLabel(widget0406);
        labelFX0->setObjectName(QString::fromUtf8("labelFX0"));
        labelFX0->setMinimumSize(QSize(78, 30));
        labelFX0->setMaximumSize(QSize(78, 30));
        labelFX0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);\n"
"border: 1px solid rgba(255, 170, 255, 0.25);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX0->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX0, 0, 0, 1, 1);

        labelFX1 = new QLabel(widget0406);
        labelFX1->setObjectName(QString::fromUtf8("labelFX1"));
        labelFX1->setMinimumSize(QSize(78, 30));
        labelFX1->setMaximumSize(QSize(78, 30));
        labelFX1->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.95);\n"
"background: rgba(255, 170, 255, 0.2);\n"
"border: 1px solid rgba(255, 170, 255, 0.25);\n"
"backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX1->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX1, 0, 1, 1, 1);

        labelFX2 = new QLabel(widget0406);
        labelFX2->setObjectName(QString::fromUtf8("labelFX2"));
        labelFX2->setMinimumSize(QSize(78, 30));
        labelFX2->setMaximumSize(QSize(78, 30));
        labelFX2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX2, 0, 2, 1, 1);

        labelFX3 = new QLabel(widget0406);
        labelFX3->setObjectName(QString::fromUtf8("labelFX3"));
        labelFX3->setMinimumSize(QSize(78, 30));
        labelFX3->setMaximumSize(QSize(78, 30));
        labelFX3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX3, 0, 3, 1, 1);

        labelFX4 = new QLabel(widget0406);
        labelFX4->setObjectName(QString::fromUtf8("labelFX4"));
        labelFX4->setMinimumSize(QSize(78, 30));
        labelFX4->setMaximumSize(QSize(78, 30));
        labelFX4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX4, 0, 4, 1, 1);

        labelFX5 = new QLabel(widget0406);
        labelFX5->setObjectName(QString::fromUtf8("labelFX5"));
        labelFX5->setMinimumSize(QSize(78, 30));
        labelFX5->setMaximumSize(QSize(78, 30));
        labelFX5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        labelFX5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFX5, 0, 5, 1, 1);

        labelFL0 = new QLabel(widget0406);
        labelFL0->setObjectName(QString::fromUtf8("labelFL0"));
        labelFL0->setMinimumSize(QSize(78, 30));
        labelFL0->setMaximumSize(QSize(78, 30));
        labelFL0->setFont(font10);
        labelFL0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL0->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL0, 1, 0, 1, 1);

        labelFL1 = new QLabel(widget0406);
        labelFL1->setObjectName(QString::fromUtf8("labelFL1"));
        labelFL1->setMinimumSize(QSize(78, 30));
        labelFL1->setMaximumSize(QSize(78, 30));
        labelFL1->setFont(font10);
        labelFL1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL1->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL1, 1, 1, 1, 1);

        labelFL2 = new QLabel(widget0406);
        labelFL2->setObjectName(QString::fromUtf8("labelFL2"));
        labelFL2->setMinimumSize(QSize(78, 30));
        labelFL2->setMaximumSize(QSize(78, 30));
        labelFL2->setFont(font10);
        labelFL2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL2, 1, 2, 1, 1);

        labelFL3 = new QLabel(widget0406);
        labelFL3->setObjectName(QString::fromUtf8("labelFL3"));
        labelFL3->setMinimumSize(QSize(78, 30));
        labelFL3->setMaximumSize(QSize(78, 30));
        labelFL3->setFont(font10);
        labelFL3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL3, 1, 3, 1, 1);

        labelFL4 = new QLabel(widget0406);
        labelFL4->setObjectName(QString::fromUtf8("labelFL4"));
        labelFL4->setMinimumSize(QSize(78, 30));
        labelFL4->setMaximumSize(QSize(78, 30));
        labelFL4->setFont(font10);
        labelFL4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL4, 1, 4, 1, 1);

        labelFL5 = new QLabel(widget0406);
        labelFL5->setObjectName(QString::fromUtf8("labelFL5"));
        labelFL5->setMinimumSize(QSize(78, 30));
        labelFL5->setMaximumSize(QSize(78, 30));
        labelFL5->setFont(font10);
        labelFL5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: rgba(255, 170, 255, 0.2);border: 1px solid rgba(255, 170, 255, 0.25);backdrop-filter: blur(6px);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFL5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelFL5, 1, 5, 1, 1);


        verticalLayout_2->addWidget(widget0406);


        verticalLayout_3->addWidget(widget04);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditCity->setPlaceholderText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\345\237\216\345\270\202\345\220\215\347\247\260", nullptr));
        LineEditCity->setText(QString());
        labelCurrentDate->setText(QCoreApplication::translate("Widget", "2025/8/9 \346\230\237\346\234\237\345\205\255", nullptr));
        labelWeatherIcon->setText(QString());
        labelTempRange->setText(QCoreApplication::translate("Widget", "20~26\342\204\203", nullptr));
        labelWeatherType->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        labelTmp->setText(QCoreApplication::translate("Widget", "23\302\260", nullptr));
        labelCity->setText(QCoreApplication::translate("Widget", "\346\267\261\345\234\263\345\270\202", nullptr));
        labelGanbao->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        labelFX->setText(QString());
        labelFXType->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFXData->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelPM25->setText(QString());
        labelPM25Type->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        labelPM25Data->setText(QCoreApplication::translate("Widget", "24", nullptr));
        labelShiDu->setText(QString());
        labelShiDuType->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        labelShiDuData->setText(QCoreApplication::translate("Widget", "33%", nullptr));
        labelAirQuality->setText(QString());
        labelAirQualityType->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        labelAirQualityData->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelDay1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDay5->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate5->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelDay4->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate2->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelDate0->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelDay0->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDay2->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDay3->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate1->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelDate3->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelDate4->setText(QCoreApplication::translate("Widget", "1/21", nullptr));
        labelWeatherkon0->setText(QString());
        labelWeatherkon1->setText(QString());
        labelWeatherkon2->setText(QString());
        labelWeatherkon3->setText(QString());
        labelWeatherkon4->setText(QString());
        labelWeatherkon5->setText(QString());
        labelWeatherTypeDate0->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeatherTypeDate1->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeatherTypeDate2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeatherTypeDate3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeatherTypeDate4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelWeatherTypeDate5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelAirQ0->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirQ1->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        labelAirQ2->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirQ3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirQ4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirQ5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelFX0->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX4->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFX5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFL0->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFL1->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFL2->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFL3->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFL4->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFL5->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
