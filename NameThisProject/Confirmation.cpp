// This page will select the appropriate banner of the unit selected by the user

// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

//------This file need to include pictures and videos--------------

#include<iostream>
#include<string>

// Function list
void PerformDfSummon(int t_t_dokkanfest, int t_pity);


void selectunitDF(int t_dokkanfest, int t_ds)
{
	// Variables
	std::string confirm = "";	// Confirmation from the user (Yes/No)

	int pity = 0;			// build pity if the user spent 150 dragon stones (repeatable)
	
	if (t_dokkanfest == 1)		// Confirmation from the user
	{
		do
		{
			std::cout << "----------------------------------------------" << std::endl
				<< "Do you want to perform the summon? (Yes/No)" << std::endl
				<< "Amount of Dragon Stones: " << t_ds << std::endl;
			std::cin >> confirm;

			// Send the user to the summon screen
			if (confirm == "Yes" || confirm == "yes")
			{
				pity += 50;		// Build the pity for the user
				PerformDfSummon(t_dokkanfest, pity);
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

			if (pity == 150)		// Reset pity
			{
				pity = 0;
			}
		} while (t_ds != 0);

		// Add a gap and display on the user's screen that there is no currency left to continue
		std::cout << std::endl <<
			"You have " << t_ds << " Dragon Stone left" << std::endl;
		
		
	}

}