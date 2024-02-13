#include <iostream>
#include "../header/earth.hpp"

Earth::Earth()
    : m_continents { new Continent[m_continentsCount] }
{

}

Earth::~Earth()
{
    delete [] m_continents;
}

int Earth::getContinentCounts() const
{
    return this->m_continentsCount;
}

Continent& Earth::getContinent(int index) const
{
    return this->m_continents[index];
}