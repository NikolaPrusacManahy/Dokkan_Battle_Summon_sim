// This is the list of Super Super rare units that will appear in the summons

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>

std::string gettingSSR()
{
	const std::string RED = "\033[31m";
	const std::string GREEN = "\033[32m";
	const std::string BLUE = "\033[34m";
	const std::string PURPLE = "\033[35m";			// Colour to assossiate with the units
	const std::string RESET = "\033[0m";

	// Set the units ready to randomly picked
	std::string ssr_units[] = { "*SSR* - vegeta", "*SSR* - Goku", "*SSR* - Gohan", "*SSR* - Goten (Gt)", "*SSR* - Vegeta (Gt)", "*SSR* - Goku (Gt)", "*SSR* - Gotenks", "*SSR* - Super Saiyan 3 Gotenks",
								"*SSR* - Yamcha", "*SSR* - Nappa", "*SSR* - Super Saiyan God Goku", "*SSR* - Super Saiyan God Vegeta", "*SSR* - Gogeta", "*SSR* - Super Saiyan Vegito", "*SSR* - Super Saiyan 2 Gohan (teen)", "*SSR* - Android 17", 
								"*SSR* - Android 16", "*SSR* - Android 18", "*SSR* - Dispo", "*SSR* - Toppo", "*SSR* - Jiren", "*SSR* - Super Saiyan God Super Saiyan Goku", "*SSR* - Ribrian", "*SSR* - Bergamo", 
								"*SSR* - hit", "*SSR* - Frost", "*SSR* - Cabba", "*SSR* - Mageta", "*SSR* - Buu (Kid)", "*SSR* - Super Buu", "*SSR* - Buu (good)", "*SSR* - Buu (Evil)", 
								"*SSR* - Ultimate Gohan", "*SSR* - Piccolo", "*SSR* - Cell (perfect form)", "*SSR* - Cell Jr.", "*SSR* - Super Saiyan God Super Saiyan Vegeta", "*SSR* - Frieza (Final form)", "*SSR* - Radits", "*SSR* - Krillin", };

	std::string ssr_feature[] = { GREEN + "*DOOKAN FEST* TEQ Super Buu (Gohan Absorbed)" + RESET , RED + "*DOOKAN FEST* STR Master Roshi" + RESET , BLUE + "*DOOKAN FEST* AGL Frieza (1st Form)" + RESET ,
									RED + "*DOOKAN FEST* STR Android #17 & Hell Fighter #17" + RESET , PURPLE +"*DOOKAN FEST* INT Majin Vegeta" + RESET , GREEN + "*DOOKAN FEST* TEQ Super Saiyan 2 Vegeta" + RESET ,
									PURPLE + "*DOOKAN FEST* INT Super Saiyan 2 Goku" + RESET , RED + "*DOOKAN FEST* STR Super Buu" + RESET, PURPLE + "*DOOKAN FEST* INT Ultimate Gohan" + RESET };

	// Pick the random unit
	int ssr_unit_generated = rand() % 40;
	int ssr_unit_featured_generated = rand() % 9;

	// If the user got a featured or not
	int probability = (rand() % 100) + 1;

	if (probability >= 1 && probability <= 94)
	{
		// Return the unit
		return ssr_units[ssr_unit_generated];
	}
	else
	{
		// Return the unit 
		return ssr_feature[ssr_unit_featured_generated];
	}

	
	
}