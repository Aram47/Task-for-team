/***************************************************************
* This is the Human class                                      *
***************************************************************/

#ifndef HUMAN_HPP
#define HUMAN_HPP

class Human 
{
public:

    // is the default constructor for the Human class 
    // whose implementation is in the human.cpp file
    Human();

    // is the destructor for the Human class 
    // whose implementation is in the human.cpp file
    ~Human();

public:

    // this method changes the status of the 
    // m_sleep member variable of the Human class
    void setHumanSleepStatus(bool);

private:
    bool m_sleep = true;
};

#endif