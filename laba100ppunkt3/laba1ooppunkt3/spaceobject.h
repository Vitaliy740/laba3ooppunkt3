#ifndef SPACEOBJECT_H
#define SPACEOBJECT_H
#include <iostream>

class SpaceObject
{
protected:
    std::string m_name;
    double m_xpos;
    double m_ypos;
    double m_magnitudo;
public:
    SpaceObject();
    SpaceObject(std::string name,double xpos, double ypos,double magnitudo);
    SpaceObject(const SpaceObject& copy);
    ~SpaceObject()=default;
    void setName(std::string name);
    void setXcoordinate(double xpos);
    void setYcoordinate(double ypos);
    void setMagnitudo(double magnitudo);
    std::string getName() const{return m_name;}
    double getXcoordinate() const {return m_xpos;}
    double getYcoordinate() const {return m_ypos;}
    double getMagnitudo() const {return m_magnitudo;}
    virtual const std::string GetType(){return "Space Object";};
};

#endif // SPACEOBJECT_H

