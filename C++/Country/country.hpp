/***************************************************************
* This is the country class                                    *
***************************************************************/

#ifndef COUNTRY_HPP
#define COUNTRY_HPP

#include "../Human/human.hpp"

class Country
{
public:

    // is the default constructor for the Country class 
    // whose implementation is in the country.cpp file
    Country();

    // is the destructor for the Country class 
    // whose implementation is in the country.cpp file
    ~Country();

public:

    // this method changes the state of a specific element of the m_humanArray array
    void setHuman(int, bool);

    // returns the count of elements in the m_humanArray array
    int getCountOfHuman();

private:
    int m_countOfHuman = 0;
    Human* m_humanArray = nullptr;
};

#endif