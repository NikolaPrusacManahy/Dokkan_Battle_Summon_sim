// This is Pity system that will occurs everytime the user spend 150 stones

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>
#include "globals.h"




std::string gettingPITY()
{
	
	const std::string RED = "\033[31m";
	const std::string GREEN = "\033[32m";
	const std::string BLUE = "\033[34m";
	const std::string PURPLE = "\033[35m";			// Colour to assossiate with the units
	const std::string RESET = "\033[0m";


	std::string ssr_feature[] = { GREEN + "*DOOKAN FEST* TEQ Super Buu (Gohan Absorbed)" + RESET , RED + "*DOOKAN FEST* STR Master Roshi" + RESET , BLUE + "*DOOKAN FEST* AGL Frieza (1st Form)" + RESET ,
									RED + "*DOOKAN FEST* STR Android #17 & Hell Fighter #17" + RESET , PURPLE + "*DOOKAN FEST* INT Majin Vegeta" + RESET , GREEN + "*DOOKAN FEST* TEQ Super Saiyan 2 Vegeta" + RESET ,
									PURPLE + "*DOOKAN FEST* INT Super Saiyan 2 Goku" + RESET , RED + "*DOOKAN FEST* STR Super Buu" + RESET, PURPLE + "*DOOKAN FEST* INT Ultimate Gohan" + RESET };

	// Pick the random unit
	int ssr_unit_featured_generated = rand() % 9;

	if (ssr_feature[ssr_unit_featured_generated] == ssr_feature[0])
	{
		amount_main++;
	}
	// return the featured unit to the function
	return ssr_feature[ssr_unit_featured_generated];
}