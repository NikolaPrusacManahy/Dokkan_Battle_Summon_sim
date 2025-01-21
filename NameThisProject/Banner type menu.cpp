// This the Banner Type file
// Excecute the user's choice and send to the next step
// LIST OF CORRECTIONS TO BE DONE:
	//
	//
	//

//------This file need to include pictures and videos--------------


// Function list

void selectunitDF(int t_dokkanfest, int t_ds);	// Send the user to the next step

#include<iostream>

void sendbannerType(int t_bannerType)
{
	// Variables
	int dokkanfest = 0;				// The user's banner choice

	int ds = 0;						// Dragon stones, user's currency

	// -------------------------Take the user's input-------------------------
		// ----------------------Dokkan fest choice
	if (t_bannerType == 1)			
	{
		do
		{
			std::cout << "-----------------DOOKAN FEST-----------------" << std::endl <<
				"Please select one of the availible banner below." << std::endl <<
				"1. TEQ Super Buu (Gohan Absorbed)" << std::endl <<
				"2. (comming soon)" << std::endl <<
				"3. (comming soon)" << std::endl;;
			std::cin >> dokkanfest;

			// Error check if the user has enteres a wrong number
			if (dokkanfest != 1)
			{
				std::cout << "--------------------------------------------------"
					<< std::endl <<
					"ERROR! You have entered a number that is not on the list or the feature is currently not availible yet." << std::endl <<
					"Please enter a correct number." << std::endl <<
					"--------------------------------------------------" <<
					std::endl;
			}
		} while (dokkanfest != 1);

		do
		{
			// Ask the user how many currencies they want to use (start from 50)
			std::cout << "Enter the amount of Dragon Stone: ";
			std::cin >> ds;

			if (ds >= 50)
			{
				// Call the function to send the user to the next step
				selectunitDF(dokkanfest, ds);
			}
			else
			{
				std::cout << "---------------------------------------------------" << std::endl <<
					"ERROR! Dragon stones amount can not be less than 50 " << std::endl <<
					"Please reenter a new amount." << std::endl <<
					"---------------------------------------------------" << std::endl;
			}
		} while (ds <= 50);
		
	}

		// -------------------------Legendary choice

	// Variables
	int legendary = 0;		// The user's banner choice

	if (t_bannerType == 2)
	{
		do
		{
			std::cout << "-----------------LEGENDARY SUMMON-----------------" << std::endl <<
				"Please select one of the availible banner below." << std::endl <<
				"1. TEQ LR Gohan/Piccolo(Nail absorbed)" << std::endl <<
				"2. STR LR Cell Max" << std::endl <<
				"3. AGL LR Ultimate Gohan" << std::endl;
			std::cin >> legendary;

			// Error check if the user has enteres a wrong number
			if (legendary <= 0 || legendary > 3)
			{
				std::cout << "--------------------------------------------------"
					<< std::endl <<
					"ERROR! You have entered a number that is not on the list." << std::endl <<
					"Please enter a correct number." << std::endl <<
					"--------------------------------------------------" <<
					std::endl;
			}
		} while (legendary <= 0 || legendary > 3);

		// Call the function to send the user to the next step
		//legendaryType(legendary);
	}

	// -------------------------Carnival choice

	// Variables
	int carnival = 0;			// The user's banner choice

	if (t_bannerType == 3)
	{
		do
		{
			std::cout << "-----------------CARNIVAL SUMMON-----------------" << std::endl <<
				"Please select one of the availible banner below." << std::endl <<
				"1. STR LR Super Saiyan Gohan" << std::endl <<
				"2. TEQ TEQ Broly" << std::endl <<
				"3. AGL LR Jiren" << std::endl;
			std::cin >> carnival;

			// Error check if the user has enteres a wrong number
			if (carnival <= 0 || carnival > 3)
			{
				std::cout << "--------------------------------------------------"
					<< std::endl <<
					"ERROR! You have entered a number that is not on the list." << std::endl <<
					"Please enter a correct number." << std::endl <<
					"--------------------------------------------------" <<
					std::endl;
			}
		} while (carnival <= 0 || carnival > 3);

		// Call the function to send the user to the next step
		//carnivalType(carnival);
	}
}