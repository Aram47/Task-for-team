/***************************************************************
* This is the Sun class                                        *
***************************************************************/

#ifndef SUN_HPP
#define SUN_HPP

class Sun
{
public:

    // is the default constructor for the Sun class 
    // whose implementation is in the continent.cpp file
    Sun();

    // is the destructor for the Sun class 
    // whose implementation is in the continent.cpp file
    ~Sun();

public:

    // changes the status of the m_sunStatus member variable
    void setSunStatus(bool);
    // returns the status of the m_sunStatus member variable
    bool getSunStatus();

private:
    bool m_sunStatus = true;
};

#endif