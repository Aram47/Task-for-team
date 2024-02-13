#include <iostream>
#include "../header/sun.hpp"

Sun::Sun()
{

}

Sun::~Sun()
{
    
}

void Sun::setSunStatus(bool resetSunStatus)
{
    this->m_sunStatus = resetSunStatus;
}

bool Sun::getSunStatus()
{
    return this->m_sunStatus;
}