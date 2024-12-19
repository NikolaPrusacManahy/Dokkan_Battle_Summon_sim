// This is Pity system that will occurs everytime the user spend 1000 stones

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>



std::string gettingMAIN()
{

	const std::string GREEN = "\033[32m";			// Colour to assossiate with the units
	const std::string RESET = "\033[0m";


	std::string ssr_feature[] = { GREEN + "*DOOKAN FEST* TEQ Super Buu (Gohan Absorbed)" + RESET };

	// Pick the random unit
	int ssr_unit_featured_generated = rand() % 1;

	// return the featured unit to the function
	return ssr_feature[ssr_unit_featured_generated];
}