#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QDebug>
#include <QFileDialog>
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include <QApplication>
#include <QString>
#include <QMessageBox>
#include "star.h"
#include "spaceobject.h"
#include "starmap.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->hide();
    ui->frame_2->hide();
    ui->frame_3->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_fileread_clicked(){
    std::string inputf="D:\\Qt\\Projects\\filesforl1\\input.txt";
    example.read_from_File(inputf);
    draw();
}

void MainWindow::draw(){
    ui->listWidget->clear();
    for(int i=0;i<example.size();i++){
        QString name;
        name="Space Object"+QString::fromStdString(std::to_string(i+1));
        QString parametr="Name: ";
        ui->listWidget->addItem(name);
        ui->listWidget->addItem(QString::fromStdString(example[i].GetType()));
        ui->listWidget->addItem(parametr+QString::fromStdString(example[i].getName()));
        parametr="X position: ";
        ui->listWidget->addItem(parametr+QString::fromStdString(std::to_string(example[i].getXcoordinate())));
        parametr="Y position: ";
        ui->listWidget->addItem(parametr+QString::fromStdString(std::to_string(example[i].getYcoordinate())));
        parametr="Magnitudo: ";
        ui->listWidget->addItem(parametr+QString::fromStdString(std::to_string(example[i].getMagnitudo())));
    }

}
void MainWindow::clear(){
    ui->name->setText("");
    ui->xpos->setText("");
    ui->ypos->setText("");
    ui->magnituda->setText("");
}
void MainWindow::on_handinput_clicked(){
    ui->frame->setEnabled(true);
    ui->frame->show();
}
void MainWindow::on_cancel_clicked(){
    clear();
    ui->frame->hide();
}
void MainWindow::on_redact_clicked(){
    ui->frame_2->show();
}
void MainWindow::on_clear_clicked(){
    for(size_t i=0;i<example.size();i++){
        example.erase(i);
    }
    ui->listWidget->clear();
}
void MainWindow::on_writefile_clicked(){
    std::string outputf="D:\\Qt\\Projects\\filesforl1\\output.txt";
    example.write_in_File(outputf);
}
void MainWindow::on_add_clicked(){
    std::cout<<ui->type->toPlainText().toStdString()<<std::endl;
    if(ui->type->toPlainText().toStdString()=="Star")
    {
        Star newS(nameGetter(),xGetter(),yGetter(),magnitudoGetter());
        example.add(newS);
        //std::cout<<newS.GetType()<<std::endl;
        //std::cout<<example[0].GetType()<<std::endl;
    }
    else
    {
        SpaceObject newS(nameGetter(),xGetter(),yGetter(),magnitudoGetter());
        example.add(newS);
        std::cout<<newS.GetType()<<std::endl;
    }
    clear();
    draw();
}
void MainWindow::on_erase_clicked(){
    std::string num=ui->numb->toPlainText().toStdString();
    if(isNumber(num) && std::stod(num)>=0 && std::stod(num)<=example.size()){
        example.erase(std::stol(num)+1);
        draw();
    }
}
void MainWindow::on_cenc_clicked(){
    ui->numb->clear();
    ui->frame_2->hide();
}
void MainWindow::on_MakeNewMap_clicked(){
    ui->frame_3->show();
}
void MainWindow::on_createnewmap_clicked(){
    std::string num=ui->magnitudo->toPlainText().toStdString();
    if(isNumber(num)){
        example=example.magnitudoMap(std::stod(num));
        draw();
    }
}
void MainWindow::on_cenc_2_clicked(){
    ui->frame_3->hide();
}
std::string MainWindow::nameGetter(){
    if(ui->name->toPlainText().toStdString().length()==0)
        return "NoName";
    return ui->name->toPlainText().toStdString();
}
double MainWindow::xGetter(){
    double X;
    std::string x=ui->xpos->toPlainText().toStdString();
    if(isNumber(x))
        X=std::stod(x);
    else
        X=0;
    return X;
}
double MainWindow::yGetter(){
    double Y;
    std::string y=ui->ypos->toPlainText().toStdString();
    if(isNumber(y))
        Y=std::stod(y);
    else
        Y=0;
    return Y;
}
double MainWindow::magnitudoGetter(){
    double Mag;
    std::string mag=ui->magnituda->toPlainText().toStdString();
    if(isNumber(mag))
        Mag=std::stod(mag);
    else
        Mag=0;
    return Mag;
}
bool MainWindow::isNumber(const std::string& value){
    try
    {
        std::stod(value);
    }
    catch (...)
    {
        return false;
    }
    return true;
}
