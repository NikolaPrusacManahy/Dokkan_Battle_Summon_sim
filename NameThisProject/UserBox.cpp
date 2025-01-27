

#include<iostream>
#include<string>
#include "globals.h"

std::string playerBox()
{
	// display the user's units list
	for (int index = 0; index <= boxAmount; index++)
	{
		std::cout << unitsArray[index] << std::endl;
	}

	std::string exitMenu = "";

	std::cout << std::endl << "If you want to exit your Box, please enter (exit) ";
	std::cin >> exitMenu;

	return exitMenu;
}