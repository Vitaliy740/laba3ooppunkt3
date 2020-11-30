#ifndef STARMAP_H
#define STARMAP_H
#include <memory>
#include <string>
#include "spaceobject.h"
#include "star.h"
class StarMap
{
public:
    StarMap()=default;
    StarMap(size_t n);
    StarMap(const StarMap& other);
    StarMap(StarMap&& other) = default;
    StarMap& operator=(const StarMap& other);
    StarMap& operator=(StarMap&& other) = default;
    size_t size() const;
    SpaceObject& operator[](size_t n);
    void add(const SpaceObject& element);
    void add(const Star& element);
    void erase(size_t n);
    void copyFromOther(const StarMap& other);
    void write_in_File(std::string filepath);
    void read_from_File(std::string filepath);
    StarMap spinMap(double& angle);
    StarMap magnitudoMap(double reqmagintudo);
    ~StarMap()=default;
private:
    std::unique_ptr<SpaceObject[]> m_data{nullptr};
    size_t m_size{0};
    size_t m_allocated{0};
};



#endif // STARMAP_H
