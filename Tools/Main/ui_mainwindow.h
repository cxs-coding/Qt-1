/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *m_titleWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_appNameBtn;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *m_minBtn;
    QPushButton *m_maxBtn;
    QPushButton *m_closeBtn;
    QWidget *m_MainWidget;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1920, 1200));
        gridLayout_2 = new QGridLayout(MainWindow);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_titleWidget = new QWidget(MainWindow);
        m_titleWidget->setObjectName(QStringLiteral("m_titleWidget"));
        m_titleWidget->setMinimumSize(QSize(0, 28));
        m_titleWidget->setMaximumSize(QSize(16777215, 28));
        gridLayout_3 = new QGridLayout(m_titleWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_appNameBtn = new QPushButton(m_titleWidget);
        m_appNameBtn->setObjectName(QStringLiteral("m_appNameBtn"));
        m_appNameBtn->setMinimumSize(QSize(50, 28));
        m_appNameBtn->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(m_appNameBtn);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 0, -1);
        m_minBtn = new QPushButton(m_titleWidget);
        m_minBtn->setObjectName(QStringLiteral("m_minBtn"));
        m_minBtn->setMinimumSize(QSize(44, 28));
        m_minBtn->setMaximumSize(QSize(44, 28));

        gridLayout->addWidget(m_minBtn, 0, 0, 1, 1);

        m_maxBtn = new QPushButton(m_titleWidget);
        m_maxBtn->setObjectName(QStringLiteral("m_maxBtn"));
        m_maxBtn->setMinimumSize(QSize(44, 28));
        m_maxBtn->setMaximumSize(QSize(44, 28));

        gridLayout->addWidget(m_maxBtn, 0, 1, 1, 1);

        m_closeBtn = new QPushButton(m_titleWidget);
        m_closeBtn->setObjectName(QStringLiteral("m_closeBtn"));
        m_closeBtn->setMinimumSize(QSize(44, 28));
        m_closeBtn->setMaximumSize(QSize(44, 28));

        gridLayout->addWidget(m_closeBtn, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        verticalLayout->addWidget(m_titleWidget);

        m_MainWidget = new QWidget(MainWindow);
        m_MainWidget->setObjectName(QStringLiteral("m_MainWidget"));

        verticalLayout->addWidget(m_MainWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", 0));
        m_appNameBtn->setText(QApplication::translate("MainWindow", "title", 0));
#ifndef QT_NO_TOOLTIP
        m_minBtn->setToolTip(QApplication::translate("MainWindow", "Minimize", 0));
#endif // QT_NO_TOOLTIP
        m_minBtn->setText(QApplication::translate("MainWindow", "\357\274\215", 0));
#ifndef QT_NO_TOOLTIP
        m_maxBtn->setToolTip(QApplication::translate("MainWindow", "Maximize", 0));
#endif // QT_NO_TOOLTIP
        m_maxBtn->setText(QApplication::translate("MainWindow", "2", 0));
#ifndef QT_NO_TOOLTIP
        m_closeBtn->setToolTip(QApplication::translate("MainWindow", "Close", 0));
#endif // QT_NO_TOOLTIP
        m_closeBtn->setText(QApplication::translate("MainWindow", "\303\227", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H