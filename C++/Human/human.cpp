#include <iostream>
#include "human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

void Human::setHumanSleepStatus(bool status)
{
    this->m_sleep = status;
}