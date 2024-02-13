#include <iostream>
#include "continent.hpp"

Continent::Continent() 
    : m_countries(new Country[m_countriesCount])
{

}

Continent::~Continent()
{
    delete [] m_countries;
    m_countries = nullptr;
}

Country& Continent::getCountry(int index) const
{
    return this->m_countries[index];
}

int Continent::getCountriesCount() const
{
    return this->m_countriesCount;
}
