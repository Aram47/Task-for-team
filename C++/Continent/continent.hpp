/***************************************************************
* This is the continent class                                  *
***************************************************************/

#ifndef CONTINENT_HPP
#define CONTINENT_HPP

#include "../Country/country.hpp"

class Continent
{
public:

    // is the default constructor for the Continent class 
    // whose implementation is in the continent.cpp file
    Continent();

    // is the destructor for the Continent class 
    // whose implementation is in the continent.cpp file
    ~Continent();

public:

    // This method returns a reference to the country type object 
    // at the given index
    Country& getCountry(int) const;

    // returns the count of elements in the m_country array
    int getCountriesCount() const;

private:
    int m_countriesCount = 2;
    Country* m_countries = nullptr;
};

#endif