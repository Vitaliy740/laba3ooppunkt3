/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_10;
    QListWidget *listWidget;
    QPushButton *fileread;
    QPushButton *handinput;
    QPushButton *redact;
    QPushButton *clear;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *name;
    QTextEdit *xpos;
    QTextEdit *ypos;
    QTextEdit *magnituda;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *label_6;
    QTextEdit *type;
    QPushButton *writefile;
    QLabel *label_9;
    QFrame *frame_2;
    QLabel *label_5;
    QTextEdit *numb;
    QPushButton *erase;
    QPushButton *cenc;
    QFrame *frame_3;
    QLabel *label_7;
    QTextEdit *magnitudo;
    QPushButton *createnewmap;
    QPushButton *cenc_2;
    QPushButton *MakeNewMap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(820, 651);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 380, 161, 161));
        label_10->setFrameShape(QFrame::StyledPanel);
        label_10->setTextFormat(Qt::RichText);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(530, 20, 256, 531));
        fileread = new QPushButton(centralwidget);
        fileread->setObjectName(QString::fromUtf8("fileread"));
        fileread->setGeometry(QRect(30, 50, 141, 28));
        handinput = new QPushButton(centralwidget);
        handinput->setObjectName(QString::fromUtf8("handinput"));
        handinput->setGeometry(QRect(30, 90, 141, 28));
        redact = new QPushButton(centralwidget);
        redact->setObjectName(QString::fromUtf8("redact"));
        redact->setGeometry(QRect(30, 130, 141, 28));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(30, 170, 141, 28));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setGeometry(QRect(220, 30, 261, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 71, 16));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 91, 51));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 91, 51));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 220, 91, 51));
        name = new QTextEdit(frame);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(110, 60, 104, 31));
        xpos = new QTextEdit(frame);
        xpos->setObjectName(QString::fromUtf8("xpos"));
        xpos->setGeometry(QRect(110, 110, 104, 31));
        ypos = new QTextEdit(frame);
        ypos->setObjectName(QString::fromUtf8("ypos"));
        ypos->setGeometry(QRect(110, 170, 104, 31));
        magnituda = new QTextEdit(frame);
        magnituda->setObjectName(QString::fromUtf8("magnituda"));
        magnituda->setGeometry(QRect(110, 230, 104, 31));
        add = new QPushButton(frame);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(50, 290, 141, 28));
        cancel = new QPushButton(frame);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(50, 320, 141, 28));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 81, 16));
        type = new QTextEdit(frame);
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(110, 20, 104, 31));
        writefile = new QPushButton(centralwidget);
        writefile->setObjectName(QString::fromUtf8("writefile"));
        writefile->setGeometry(QRect(590, 560, 141, 28));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 540, 521, 41));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setGeometry(QRect(20, 240, 151, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 91, 41));
        numb = new QTextEdit(frame_2);
        numb->setObjectName(QString::fromUtf8("numb"));
        numb->setGeometry(QRect(100, 10, 41, 31));
        erase = new QPushButton(frame_2);
        erase->setObjectName(QString::fromUtf8("erase"));
        erase->setGeometry(QRect(20, 50, 111, 28));
        cenc = new QPushButton(frame_2);
        cenc->setObjectName(QString::fromUtf8("cenc"));
        cenc->setGeometry(QRect(20, 80, 111, 28));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setEnabled(true);
        frame_3->setGeometry(QRect(230, 400, 191, 121));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 151, 41));
        magnitudo = new QTextEdit(frame_3);
        magnitudo->setObjectName(QString::fromUtf8("magnitudo"));
        magnitudo->setGeometry(QRect(140, 10, 41, 31));
        createnewmap = new QPushButton(frame_3);
        createnewmap->setObjectName(QString::fromUtf8("createnewmap"));
        createnewmap->setGeometry(QRect(20, 50, 111, 28));
        cenc_2 = new QPushButton(frame_3);
        cenc_2->setObjectName(QString::fromUtf8("cenc_2"));
        cenc_2->setGeometry(QRect(20, 80, 111, 28));
        MakeNewMap = new QPushButton(centralwidget);
        MakeNewMap->setObjectName(QString::fromUtf8("MakeNewMap"));
        MakeNewMap->setGeometry(QRect(30, 210, 141, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216:</p><p>\320\242\320\270\320\277: Space Object</p><p>\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265: NoName</p><p>x: 0</p><p>y: 0</p><p>\320\227\320\262\320\265\320\267\320\264\320\275\320\260\321\217 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260:0</p></body></html>", nullptr));
        fileread->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        handinput->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\262 \321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        redact->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 X:</p><p>(\320\276\321\202 -90 \320\264\320\276 90)</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 Y:</p><p>(\320\276\321\202 -90 \320\264\320\276 90)</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\262\320\265\320\267\320\264\320\275\320\260\321\217 </p><p>\320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260:</p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\260\320\262\320\270\321\202\321\214", nullptr));
        cancel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\242\320\270\320\277 \320\276\320\261\321\212\320\265\320\272\321\202\320\260:</p></body></html>", nullptr));
        writefile->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\320\273\320\270 \320\262\320\262\320\265\320\264\320\265\320\275\321\213 \320\275\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217, \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\262\320\276\320\267\321\214\320\274\320\265\321\202 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216.", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 </p><p>\321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260:</p></body></html>", nullptr));
        erase->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        cenc->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\203\321\216</p><p> \321\201\320\262\320\265\321\202\320\270\320\274\320\276\321\201\321\202\321\214:</p></body></html>", nullptr));
        createnewmap->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", nullptr));
        cenc_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        MakeNewMap->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\201\320\262\320\265\321\202\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
