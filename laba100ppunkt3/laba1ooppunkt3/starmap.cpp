#include "starmap.h"
#include "star.h"
#include <stdexcept>
#include <fstream>
#include <iostream>


StarMap::StarMap(size_t n) {
    m_size = n;
    m_data.reset(new SpaceObject[m_size]);
    m_allocated = m_size;
}
StarMap::StarMap(const StarMap& other) {
    copyFromOther(other);
}

StarMap& StarMap::operator=(const StarMap& other) {
    copyFromOther(other);
    return *this;
}

size_t StarMap::size() const {
    return m_size;
}

SpaceObject& StarMap::operator[](size_t n) {
    if (n >= m_size) {
        throw std::out_of_range("");
    }
    return m_data[n];
}

void StarMap::add(const SpaceObject &element) {
    if (m_size >= m_allocated) {
        m_allocated *= 2;
        if(m_allocated<1)
            m_allocated=1;
        auto newMemory = new SpaceObject[m_allocated];
        for (size_t i = 0; i < m_size; ++i) {
            newMemory[i] = m_data[i];
        }
        m_data.reset(newMemory);
    }
    m_data[m_size] = element;
    ++m_size;
}
void StarMap::add(const Star &element) {
    if (m_size >= m_allocated) {
        m_allocated *= 2;
        if(m_allocated<1)
            m_allocated=1;
        auto newMemory = new SpaceObject[m_allocated];
        for (size_t i = 0; i < m_size; ++i) {
            newMemory[i] = m_data[i];
        }
        m_data.reset(newMemory);
    }
    m_data[m_size] = element;
    ++m_size;
}
void StarMap::erase(size_t n) {
    if(m_size==1)
        --m_size;
    else
    {
    for (size_t i = n; i < m_size-1; ++i) {
        m_data[i] = m_data[i + 1];
    }
    --m_size;
    }
}

void StarMap::copyFromOther(const StarMap& other) {
    m_size = other.m_size;
    m_data.reset(new SpaceObject[m_size]);
    m_allocated = m_size;
    for (size_t i = 0; i < m_size; ++i) {
        m_data[i] = other.m_data[i];
    }
}

StarMap StarMap::spinMap(double &angle){
    StarMap newMap;
    for(size_t i=0;i<m_size;i++){
        newMap.add(SpaceObject(m_data[i].getName(),90-abs(m_data[i].getXcoordinate()-angle), 90-abs(m_data[i].getYcoordinate()-angle), m_data[i].getMagnitudo()));
    }
    return  newMap;
}
StarMap StarMap::magnitudoMap(double reqmagintudo){
    StarMap newMap;
    for(size_t i=0;i<m_size;i++){
        if(m_data[i].getMagnitudo()>=reqmagintudo){
            newMap.add(m_data[i]);
        }
    }
    return newMap;
}
void StarMap::write_in_File(std::string filepath){
    std::ofstream file;
    file.open(filepath,std::ios::out);
    if(file.is_open()){
        for(size_t i=0;i<m_size;i++){
            file<< (i+1) <<" Space Object:"<<std::endl;
            file<<"Name: "<<m_data[i].getName()<<std::endl;
            file<<"x: "<<m_data[i].getXcoordinate()<<std::endl;
            file<<"y: "<<m_data[i].getYcoordinate()<<std::endl;
            file<<"Magnitudo: "<<m_data[i].getMagnitudo()<<std::endl;

        }
        file.close();
    }
}
void StarMap::read_from_File(std::string filepath) {
    std::fstream file;
    file.open(filepath,std::ios::in);
    double buffer;
    std::string bufferstring;
    while(!file.eof()){
        SpaceObject newS;
        file>>bufferstring;
        newS.setName(bufferstring);
        file>>buffer;
        if(file.eof()){
            this->add(newS);
            break;
        }
        newS.setXcoordinate(buffer);
        if(file.eof()){
            this->add(newS);
            break;
        }
        file>>buffer;
        newS.setYcoordinate(buffer);
        if(file.eof()){
            this->add(newS);
            break;
        }
        file>>buffer;
        newS.setMagnitudo(buffer);
        add(newS);
    }
    file.close();
}
