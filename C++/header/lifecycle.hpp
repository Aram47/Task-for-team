/***************************************************************
* This is the Lifecycle class                                  *
***************************************************************/

#ifndef LIFECYCLE_HPP
#define LIFECYCLE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "earth.hpp"

class Lifecycle
{
public:

    // is the default constructor for the Lifecycle class 
    // whose implementation is in the lifecycle.cpp file
    Lifecycle();

    // is the destructor for the Lifecycle class 
    // whose implementation is in the lifecycle.cpp file
    ~Lifecycle();

public:

    // is a function call operator that takes a reference to const Earth as an argument and
    // calls these two methods. changeHumanSleepStatus and fileInputAndPrint
    void operator() (const Earth&);

private:

    // this method takes const reference to Earth, count of Continents as int and
    // a status as bool 
    void changeHumanSleepStatus(const Earth&, int, bool);

    // this method takes reference to ofstream object, const reference to string
    // prints the content of the string and puts it into ofstream object 
    void fileInputAndPrint(std::ofstream&, const std::string&) const;

private:

    const int m_days = 10;
    Sun* m_sun = nullptr;
    std::string forFirstContinent = "The people of all the countries of the first continent woke up and the people of all the countries of the second continent fell asleep";
    std::string forSecondContinent = "The people of all the countries of the second continent woke up and the people of all the countries of the first continent slept";
};

#endif