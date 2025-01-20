// Dokkan Fest TEQ Buhan Summon file

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>

// Global variables
int amount_main = 0;				// Amount of main unit
int amount_Featured = 0;			// Amount of featured unit
int amount_ssr = 0;					// Amount of SSR
int amount_sr = 0;					// Amount of SR
int amount_r = 0;					// Amount of R

// Function list
std::string gettingSR();		// Get a SR
std::string gettingR();			// Get a R
std::string gettingSSR();		// Get a SSR

std::string gettingPITY();		// Getting a featured unit
std::string gettingMAIN();		// Getting the main unit

void PerformDfSummon(int t_t_dokkanfest, int t_pity, int t_mainUnit)
{
	if (t_t_dokkanfest == 1)
	{
		// Variables
		std::string character = "";			// These are the characters that the user will get in order
		int step;							// Number that need to reach 10 

		int randomNum = 0;					// Number generated randomly

		

		for (step = 1; step <= 10; step++)
		{
			// Generate a random number to set the user's chance to get a unit (1-100)
			randomNum = (rand() % 100) + 1;

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
				character = gettingSSR();// Call a SRR unit
				amount_ssr++;
			}

			// Character number 10 is always a SSR
			if (t_mainUnit != 1000)
			{
				if (step == 10)
				{
					if (t_pity == 150)
					{
						character = gettingPITY();  // Call a featured unit
						amount_Featured++;
					}
					else
					{
						character = gettingSSR();
						amount_ssr++;
					}
				}
			}
			else if (step == 10)
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