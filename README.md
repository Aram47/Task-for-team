Project Name: Lifecycle Simulation
Description:
This project simulates the lifecycle on Earth, focusing on the sleep patterns of humans across continents. It utilizes C++ classes to represent various components such as Earth, Continents, Countries, Humans, and the Sun. The simulation runs for a predefined number of days, toggling the sleep status of humans based on the state of the sun.

Components:
lifecycle.hpp: Header file defining the Lifecycle class with its member functions and variables.
lifecycle.cpp: Implementation file containing the member function definitions of the Lifecycle class.
main.cpp: Main file driving the simulation.
Continent/continent.cpp, Country/country.cpp, Earth/earth.cpp, Human/human.cpp, Sun/sun.cpp: Files defining classes representing different elements of the simulation.
AllFiles/allfiles.hpp: Header file including all necessary headers for the project.
Usage:
To compile the project, use the provided Makefile. Run make to compile the source files and generate the executable named Life. The executable can be executed with ./Life. This will initiate the lifecycle simulation, and the results will be stored in a text file named LifeCycleResult.txt.

Compilation:
Compile: make
Clean: make del (Removes the executable file)
Clean All: make delall (Removes the executable file and the result file)
Dependencies:
This project requires a C++ compiler with support for C++11 standard or later.
The provided Makefile assumes GNU Make and a UNIX-like environment.
File Structure:
lifecycle.hpp: Contains the declaration of the Lifecycle class.
lifecycle.cpp: Implements the methods of the Lifecycle class.
main.cpp: Entry point of the program.
Continent/continent.cpp: Implements the Continent class.
Country/country.cpp: Implements the Country class.
Earth/earth.cpp: Implements the Earth class.
Human/human.cpp: Implements the Human class.
Sun/sun.cpp: Implements the Sun class.
AllFiles/allfiles.hpp: Header file including all necessary headers.
Author:
Name: [Aram]
Contact: [aram.minasyan.00@gmail.com]
Date: [12.02.2024]
