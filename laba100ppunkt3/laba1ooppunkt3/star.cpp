#include "star.h"

Star::Star(){
    SpaceObject();
}
Star::Star(std::string name,double xpos, double ypos,double magnitudo)
{
    SpaceObject(name,xpos,ypos,magnitudo);
}

Star::Star(const Star& copy){
    this->setXcoordinate(copy.getXcoordinate());
    this->setYcoordinate(copy.getYcoordinate());
    this->setYcoordinate(copy.getMagnitudo());
}


