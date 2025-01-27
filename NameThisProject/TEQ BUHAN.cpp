// Dokkan Fest TEQ Buhan Summon file

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>
#include "globals.h"


// Function list
std::string gettingSR();						// Get a SR
std::string gettingR();							// Get a R
std::string gettingSSR(int amount_main);		// Get a SSR

std::string gettingPITY(int amount_main);		// Getting a featured unit
std::string gettingMAIN();						// Getting the main unit

void PerformDfSummon(int t_t_dokkanfest, int t_pity, int t_mainUnit, std::string confirm)
{
	if (t_t_dokkanfest == 1)
	{
		// Variables
		std::string character = "";			// These are the characters that the user will get in order
		int step;							// Number that need to reach 10 

		int randomNum = 0;					// Number generated randomly

		// If the user has bought the main unit by red coins
		if (confirm == "Main" || confirm == "main")
		{
			character = gettingMAIN();		// Call the main unit
			std::cout << "You have bought the main unit: " << character << std::endl;
			amount_main++;
		}

		for (step = 1; step <= 10; step++)
		{
			if (confirm == "Main" || confirm == "main")
			{
				break;
			}
			// Generate a random number to set the user's chance to get a unit (1-100)
			randomNum = (rand() % 101) + 1;

			if (randomNum >= 1 && randomNum <= 59 && step <= 9)		// Getting a SR unit
			{
				character = gettingSR();// Call SR unit
				amount_sr++;
			}
			else if (randomNum >= 60 && randomNum <= 89 && step <= 9)		// getting a R unit
			{
				character = gettingR();// Call R unit
				amount_r++;
			}
			else if (step <= 9)
			{
				character = gettingSSR(amount_main);// Call a SRR unit
				amount_ssr++;
			}

			
			// Character number 10 is always a SSR
			if (t_mainUnit != 1000 && confirm != "Main")
			{
				if (step == 10)
				{
					if (t_pity == 150)
					{
						character = gettingPITY(amount_main);  // Call a featured unit
						amount_Featured++;
					}
					else
					{
						character = gettingSSR(amount_main);
						amount_ssr++;
					}
				}
			}
			else if (step == 10 && confirm != "Main")
			{
				character = gettingMAIN();		// Call the main unit
				amount_main++;
			}
			

			// Display the result of the summon
			std::cout << "Summon result--> " << character << std::endl;
		}
		
		// Add a gap and display the amount of units the user got in a summury version
		std::cout << std::endl<<
			"Amount of Main unit: " << amount_main << std::endl<<
			"Amount of Fetured Unit: " << amount_Featured << std::endl <<
			"Amount of SSR: " << amount_ssr << std::endl <<
			"Amount of SR: " << amount_sr << std::endl <<
			"Amount of R: " << amount_r << std::endl;
		
	}

}