/***************************************************************
* This is the Earth class                                      *
***************************************************************/

#ifndef EARTH_HPP
#define EARTH_HPP

#include "../Continent/continent.hpp"
#include "../Sun/sun.hpp"

class Earth
{
public:

    // is the default constructor for the Earth class 
    // whose implementation is in the earth.cpp file
    Earth();

    // is the destructor for the Earth class 
    // whose implementation is in the earth.cpp file
    ~Earth();
public:

    // this method returns the length of the m_continents array
    int getContinentCounts() const;

    // this method returns a reference to the element 
    // under the specified index from the m_continents array
    Continent& getContinent(int) const;

private:
    int m_continentsCount = 2;
    Continent* m_continents = nullptr;
};

#endif