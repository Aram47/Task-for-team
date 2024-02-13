#include <iostream>
#include "../header/human.hpp"

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