// This is the list of rare units that will appear in the summons

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>

std::string gettingR()
{
	// Set the units ready to randomly picked
	std::string r_units[] = { "R - Goku", "R - vegeta", "R - Piccolo", "R - Bulma", "R - Trunks", "R - Goten", "R - Gohan", "R - Master roshi", "R - Yamcha",
							"R - Tien", "R - Nappa", "R - Radits", "R - Frieza", "R - Android 16", "R - Android 17", "R - Android 18", "R - Android 19", "R - Dr. Gero", "R - Chichi" };
	
	// Pick the random unit
	int r_unit_generated = rand() % 19;

	// Return the unit 
	return r_units[r_unit_generated];
}