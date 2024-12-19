// This is the list of Super Rare units that will appear in the summons

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>

std::string gettingSR()
{
	// Set the units ready to randomly picked
	std::string sr_units[] = { "SR - vegeta", "SR - Super Saiyan Goku", "SR - King Piccolo", "SR - Yamcha", "SR - Cooler", "SR - Super Saiyan Trunks (kid)", "SR - Pan (Gt)", 
								"SR - Super Saiyan Vegeta", "SR - Piccolo (Fused)", "SR - Android 13", "SR - Mai", "SR - Gohan", "SR - trunks (teen)(Future)", "SR - Gotenks", "SR - Goku", "SR - Super Saiyan 2 Goku", "SR - Krillin",
								"SR - Kami", "SR - Mr. Popo", "SR - Android 19", "SR - Android 16", "SR - Cell (1st From)", "SR - Dodoria", "SR - Zarbon", "SR - Frieza (2nd form)"};

	// Pick the random unit
	int sr_unit_generated = rand() % 25;

	// Return the unit 
	return sr_units[sr_unit_generated];
}