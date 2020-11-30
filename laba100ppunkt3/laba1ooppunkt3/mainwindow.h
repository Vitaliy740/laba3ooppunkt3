#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "spaceobject.h"
#include "starmap.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fill();
    void clear();
    bool isNumber(const std::string& value);
    std::string nameGetter();
    double xGetter();
    double yGetter();
    double magnitudoGetter();
    void empty_file();
    void draw();
    void redact();
    void deleted();
private slots:
    void on_fileread_clicked();
    void on_handinput_clicked();
    void on_redact_clicked();
    void on_clear_clicked();
    void on_writefile_clicked();
    void on_add_clicked();
    void on_cancel_clicked();
    void on_erase_clicked();
    void on_cenc_clicked();
    void on_createnewmap_clicked();
    void on_MakeNewMap_clicked();
    void on_cenc_2_clicked();

private:
    Ui::MainWindow *ui;
    StarMap example;
};
#endif // MAINWINDOW_H
