#include "spaceobject.h"
#include "string.h"
#include "stdlib.h"
SpaceObject::SpaceObject(){
    this->m_name="NoName";
    this->m_xpos=0;
    this->m_ypos=0;
    this->m_magnitudo=0;
}
SpaceObject::SpaceObject(std::string name,double xpos, double ypos,double magnitudo)
{
    if(name=="")
        this->m_name="NoName";
    else
        this->m_name=name;
    if(xpos<-90 || xpos>90)
        this->m_xpos=0;
    else
        this->m_xpos=xpos;
    if(ypos<-90 || xpos>90)
        this->m_ypos=0;
    else
        this->m_ypos=ypos;
    if(magnitudo<0)
        this->m_magnitudo=0;
    else
        this->m_magnitudo=magnitudo;
}

SpaceObject::SpaceObject(const SpaceObject& copy){
    this->m_xpos=copy.getXcoordinate();
    this->m_ypos=copy.getYcoordinate();
    this->m_magnitudo=copy.getMagnitudo();
}
void SpaceObject::setName(std::string name){
    if(name==""){
        this->m_name="NoName";
    }
    else
        this->m_name=name;
}
void SpaceObject::setXcoordinate(double xpos){
    if(xpos<0)
        this->m_xpos=0;
    else
        this->m_xpos=xpos;
}

void SpaceObject::setYcoordinate(double ypos){
    if(ypos<0)
        this->m_ypos=0;
    else
        this->m_ypos=ypos;
}

void SpaceObject::setMagnitudo(double magnitudo){
    if(magnitudo<0)
        this->m_magnitudo=0;
    else
        this->m_magnitudo=magnitudo;
}
