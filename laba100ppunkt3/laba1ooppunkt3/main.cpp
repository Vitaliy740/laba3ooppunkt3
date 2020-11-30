#include "mainwindow.h"

#include <QApplication>
#include <QCoreApplication>
#include <iostream>
#include <string>
#include <windows.h>
#include <assert.h>
#include "star.h"
#include "starmap.h"
const double MIN = -90;
const double MAX = 90;
void check(Star& example, double xpos,double ypos, double magnitudo){
    assert(example.getXcoordinate()-xpos>=MIN || example.getXcoordinate()-xpos<=MAX );
    assert(example.getYcoordinate()-ypos>=MIN || example.getYcoordinate()-ypos<=MAX);
}
void change(Star& example, double xpos,double ypos, double magnitudo){
    example.setXcoordinate(xpos);
    example.setYcoordinate(ypos);
    example.setMagnitudo(magnitudo);
}
//void test1(){
//    Star example1(1,1,14.2);
//    change(example1,8,4,5);
//    check(example1,3,4,5);
//    Star example2(2,3,55);
//    Star example3(89,-40,80.4);
//    std::cout<<"NO";
//}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    Star example1(1,1,14.2);
//    Star example2(2,3,55);
//    Star example3(89,-40,80.4);
    std::string inputf="D:\\Qt\\Projects\\filesforl1\\input.txt";
//    std::string outputf="D:\\Qt\\Projects\\filesforl1\\output.txt";
//    StarMap mapexample2;
//    mapexample2.add(example1);
//    mapexample2.add(example2);
//    mapexample2.add(example3);
//    StarMap mapexample3=mapexample2.magnitudoMap(25);
//    mapexample3.write_in_File(outputf);
   // StarMap mapexample;
   // mapexample.read_from_File(inputf);
   // Star st;
    //mapexample.add(st);
    //std::cout<< "X coordinate: " <<mapexample[1].getXcoordinate() <<" Y coordinate: "<<mapexample[1].getYcoordinate()<< " Magnitudo: " <<mapexample[1].getMagnitudo();
    return a.exec();
}
