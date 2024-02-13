#include <fstream>
#include "lifecycle.hpp"
#include "../Earth/earth.hpp"

Lifecycle::Lifecycle() 
    : m_sun(new Sun())
{

}

Lifecycle::~Lifecycle()
{
    delete this->m_sun;
    this->m_sun = nullptr;
}

void Lifecycle::operator() (const Earth& Planet)
{
    int firstContinent = 0;
    int secondContinent = 1;
    std::ofstream FILE;

    FILE.open("LifeCycleResult.txt", std::ios::out);

	if (!FILE) {
		std::cout << "File not created!" << std::endl;
        exit(1);
	}

    for (int i = 0; i < this->m_days; ++i)
    {
        if (this->m_sun->getSunStatus())
        {   
            Lifecycle::changeHumanSleepStatus(Planet, firstContinent, true);
            Lifecycle::changeHumanSleepStatus(Planet, secondContinent, false);

            Lifecycle::fileInputAndPrint(FILE, this->forFirstContinent);

            this->m_sun->setSunStatus(false);
        }
        else
        {
            Lifecycle::changeHumanSleepStatus(Planet, firstContinent, false);
            Lifecycle::changeHumanSleepStatus(Planet, secondContinent, true);

            Lifecycle::fileInputAndPrint(FILE, this->forSecondContinent);

            this->m_sun->setSunStatus(true);
        }
    }

    FILE.close();
};

void Lifecycle::fileInputAndPrint(std::ofstream& FILE, const std::string& IOText) const
{
    std::cout << IOText << std::endl;
    FILE << IOText + '\n';
}

void Lifecycle::changeHumanSleepStatus(const Earth& Planet, int continent, bool status)
{
    int country = 0;

    for (int i = 0; i < Planet.getContinent(continent).getCountry(country).getCountOfHuman(); ++i)
    {   
        if (country < Planet.getContinent(continent).getCountriesCount())
        {
            Planet.getContinent(continent).getCountry(country).setHuman(i, status);

            if (i == Planet.getContinent(continent).getCountry(country).getCountOfHuman() - 1)
            {
                i = 0;
                ++country;
            }
        }
    }
}