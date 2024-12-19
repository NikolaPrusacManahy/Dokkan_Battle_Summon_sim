// This page will select the appropriate banner of the unit selected by the user

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

//------This file need to include pictures and videos--------------

#include<iostream>
#include<string>

// Function list
void PerformDfSummon(int t_t_dokkanfest, int t_pity, int t_mainUnit);


void selectunitDF(int t_dokkanfest, int t_ds)
{
	// Variables
	std::string confirm = "";	// Confirmation from the user (Yes/No)

	int pity = 0;				// build pity if the user spent 150 dragon stones (repeatable)
	int pityCount = 3;			// Show the amount of summon required to get the pity unit
	int mainUnit = 0;			// The user will get the main unit when the amount of summons is 20
	int mainUnit_count = 20;	// Countdown before getting the main unit
	
	if (t_dokkanfest == 1)		// Confirmation from the user
	{
		do
		{
			std::cout << "----------------------------------------------" << std::endl
				<< "Do you want to perform the summon? (Yes/No)" << std::endl
				<< "Amount of Dragon Stones: " << t_ds << std::endl
				<< "Guaranted Featured unit in " << pityCount << " summons" << std::endl
				<< "Get the main unit in " << mainUnit_count << " summons" << std::endl;
			std::cin >> confirm;

			// Send the user to the summon screen
			if (confirm == "Yes" || confirm == "yes")
			{
				pity += 50;				// Build the pity for the user
				pityCount -= 1;			// Reduce the number so the DOKKAN FEST is Obtained at 1
				mainUnit += 50;			// Build main unit pity
				mainUnit_count -= 1;	// Reduce the number so the Main unit is Obtained at 1

				PerformDfSummon(t_dokkanfest, pity, mainUnit);
				// use an amount of currency everytime the user summon
				t_ds -= 50;		// Use dragon stones
			}
			else if (confirm == "No" || confirm == "no")
			{
				std::cout << std::endl<<  
							"You have closed the program" << std::endl;
				break;
			}
			else
			{
				// Error check
				std::cout << "ERROR! You have to type (yes or no) " << std::endl;
				continue;
			}

			if (pity == 150)		// Reset pity and pity counting
			{
				pity = 0;
				pityCount = 3;
			}

			if (mainUnit == 1000)		// Reset main unit pity and countdown
			{
				mainUnit_count = 20;
				mainUnit = 0;
			}

		} while (t_ds != 0);

		// Add a gap and display on the user's screen that there is no currency left to continue
		std::cout << std::endl <<
			"You have " << t_ds << " Dragon Stone left" << std::endl;
		
		
	}

}