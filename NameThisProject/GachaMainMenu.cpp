// Nikola Prusac Manahy
// C00309098
// Session time (Approx)
	// 06.12.24: 6 hours
	// 09.12.24: 1h30 hours
//----------------------------------------------------------------------------------
// This program is a re-creation of the Gacha game Dragon Ball Z Dokkan Battle
// It will simulate a gacha system with probabilities to get certain results
//----------------------------------------------------------------------------------
// Develelopment version!!!!
// ---------------------------------------------------------------------------------
// LIST OF CORRECTION TO BE DONE!!!!!
	// finish pity system
	//
	//


#include<iostream>

// Functions
void sendbannerType(int t_bannerType);		// This will take the user's choice and perform the next step


int main()
{
	// Variables
	int bannerType = 0;			// This variable take the user's banner tye choice

	// Randomizer seed 
	srand(time(nullptr));

	// Main Menu
	do
	{
		std::cout << "-----------------BANNER SELECTION-----------------" << std::endl
			<< "Please select a banner type by inputing the corresponding number." << std::endl
			<< "1. Dokkan Fest " << std::endl
			<< "2. Legendary (Comming soon)" << std::endl
			<< "3. Carnival (Comming soon)" << std::endl;
		std::cin >> bannerType;

		if (bannerType <= 0 || bannerType > 3)		// Error check if the user's enter a wrong number
		{
			std::cout << "--------------------------------------------------"
				<< std::endl <<
				"ERROR! You have entered a number that is not on the list." << std::endl <<
				"Please enter a correct number." << std::endl <<
				"--------------------------------------------------"<< 
				std::endl;
		}
	} while (bannerType <= 0 || bannerType > 3);		// Repeat if not correct
	

	// Send to the next section
	sendbannerType(bannerType);		// Call the function
	// End program
	system("Pause");
	return 0;
}