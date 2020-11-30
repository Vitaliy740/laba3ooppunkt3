#ifndef STAR_H
#define STAR_H
#include "spaceobject.h"

class Star: public SpaceObject
{
public:
    Star();
    Star(std::string,double xpos, double ypos,double magnitudo);
    Star(const Star& copy);
    ~Star()=default;
    const std::string GetType(void){return "Star";} ;
};

#endif // STAR_H
