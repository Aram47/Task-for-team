#include <iostream>
#include <iostream>
#include "country.hpp"
#include "../Human/human.hpp"

Country::Country()
{
    this->m_countOfHuman = (std::rand() % 6) + 5;
    this->m_humanArray = new Human[m_countOfHuman];
}

Country::~Country()
{
    delete [] this->m_humanArray;
}

void Country::setHuman(int index, bool humanSleepStatus)
{
    this->m_humanArray[index].setHumanSleepStatus(humanSleepStatus);
}

int Country::getCountOfHuman()
{
    return this->m_countOfHuman;
}