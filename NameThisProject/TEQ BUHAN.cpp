// Dokkan Fest TEQ Buhan Summon file

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

#include<iostream>
#include<string>

// Function list
std::string gettingSR();		// Get a SR
std::string gettingR();			// Get a R
std::string gettingSSR();		// Get a SSR

std::string gettingPITY();		// Getting a feature unit

void PerformDfSummon(int t_t_dokkanfest, int t_pity)
{
	if (t_t_dokkanfest == 1)
	{
		// Variables
		std::string character = "";			// These are the characters that the user will get in order
		int step;							// Number that need to reach 10 

		int randomNum = 0;					// Number generated randomly

		int amount_ssr = 0;					// Amount of SSR
		int amount_sr = 0;					// Amount of SR
		int amount_r = 0;					// Amount of R

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
			if (step == 10)
			{
				if (t_pity == 150)
				{
					character = gettingPITY();  // Call a SRR unit
				}
				else
				{
					character = gettingSSR();
					amount_ssr++;
				}
				
			}

			// Display the result of the summon
			std::cout << "Summon result--> " << character << std::endl;
		}
		
		// Add a gap and display the amount of units the user got in a summury version
		std::cout << std::endl<<
			"Amount of SSR: " << amount_ssr << std::endl <<
			"Amount of SR: " << amount_sr << std::endl <<
			"Amount of R: " << amount_r << std::endl;
		
	}

}