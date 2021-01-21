#include <iostream>
#include <string.h>
#include "Platforms.h"
#include "Game.h"
using namespace std;

int main()
{
	
	Platforms platformOne("Playstation 5","Sony");
	Platforms platformTwo("Xbox Series X","Microsoft");
	Platforms platformThree("Nintendo Switch","Nintendo");
	
	// Playstation Games
	Game gameOne("God Of War","Santa Monica Studio","Sony Interactive Entertainment");
	Game gameTwo("Spider-Man", "Insomniac Games", "Sony Interactive Entertainment");
	Game gameThree("Last Of Us 2", "Naughty Dog", "Sony Interactive Entertainment");
	Game gameFour("Ghost Of Tsushima", "Sucker Punch Productions", "Sony Interactive Entertainment");
	Game gameFive("Days Gone", "Bend Studio", "Sony Interactive Entertainment");

	// Xbox Games
	Game gameSix("Gears 5", "The Coalition", "Xbox Games Studios");
	Game gameSeven("Halo Infinite", "343 Industries", "Xbox Game Studios");
	Game gameEight("Forza Motorsport 7", "Turn 10 Studios", "Xbox Game Studios");
	Game gameNine("Minecraft", "Mojang Studios", "Xbox Game Studios");
	Game gameTen("Psychonauts 2", "Double Fine", "Xbox Game Studios");

	// Switch Games 
	Game gameEleven("Animal Crossing: New Horizons", "Nintendo EPD", "Nintendo");
	Game gameTwelve("Super Smash Bros. Ultimate", "Bandai Namco Studios", "Nintendo");
	Game gameThirteen("The Legend Of Zelda: Breath Of The Wild ", "Nintendo EPD", "Nintendo");
	Game gameFourteen("Pokemon Sword And Shield", "Game Freak", "Nintendo");
	Game gameFifteen("Super Mario Odyssey", "Nintendo EPD", "Nintendo");


	cout << endl;
	cout << "            --- Welcome to Achievement Maker ---" << endl;
	cout << endl;
	cout << "  --- Make your own achievments for your favorite  games --- ";
	
	cout << endl;
	cout << endl;
	
	cout << "1 - Display platforms ";
	cout << endl;
	cout << endl;
	cout << "2 - Display games";
	cout << endl;
	cout << endl;
	cout << endl;

	

	cout << "3 - Make custom achievments ";
	cout << endl;
	cout << endl;
	cout << "4 - Display custom achievments ";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "5 - Exit " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Menu Choice: ";
	int input;
	cin >> input;

	if (input == 1)
	{
		system("CLS");
		
		cout << endl;
		cout << "            --- Platforms ---" << endl;
		cout << endl;

		cout << endl;
		cout << "Name: " << platformOne.getPlatformName() << endl;
		cout << "Manufacturer: " << platformOne.getPlatforManufacturermName() << endl;
		
		cout << endl;
		cout << "Name: " << platformTwo.getPlatformName() << endl;
		cout << "Manufacturer: " << platformTwo.getPlatforManufacturermName() << endl;
		
		cout << endl;
		cout << "Name: " << platformThree.getPlatformName() << endl;
		cout << "Manufacturer : " << platformThree.getPlatforManufacturermName() << endl;
		
	}
	
	if (input == 2)
	{
		system("CLS");

		cout << endl;
		cout << "            --- Games ---" << endl;
		cout << endl;

		cout << " -- Sony -- ";
		cout << endl;

		cout << endl;
		cout << "Name: " << gameOne.getGameName() << " - Publisher: " << gameOne.getPublisherName() << " - Developer: " << gameOne.getDeveloperName() << endl;
		cout << "Name: " << gameTwo.getGameName() << " - Publisher: " << gameTwo.getPublisherName() << " - Developer: " << gameTwo.getDeveloperName() << endl;
		cout << "Name: " << gameThree.getGameName() << " - Publisher: " << gameThree.getPublisherName() << " - Developer: " << gameThree.getDeveloperName() << endl;
		cout << "Name: " << gameFour.getGameName() << " - Publisher: " << gameFour.getPublisherName() << " - Developer: " << gameFour.getDeveloperName() << endl;
		cout << "Name: " << gameFive.getGameName() << " - Publisher: " << gameFive.getPublisherName() << " - Developer: " << gameFive.getDeveloperName() << endl;

		cout << endl;
		cout << " -- Xbox Series X -- ";
		cout << endl;
		cout << endl;
		cout << "Name: " << gameSix.getGameName() << " - Publisher: " << gameSix.getPublisherName() << " - Developer: " << gameSix.getDeveloperName() << endl;
		cout << "Name: " << gameSeven.getGameName() << " - Publisher: " << gameSeven.getPublisherName() << " - Developer: " << gameSeven.getDeveloperName() << endl;
		cout << "Name: " << gameEight.getGameName() << " - Publisher: " << gameEight.getPublisherName() << " - Developer: " << gameEight.getDeveloperName() << endl;
		cout << "Name: " << gameNine.getGameName() << " - Publisher: " << gameNine.getPublisherName() << " - Developer: " << gameNine.getDeveloperName() << endl;
		cout << "Name: " << gameTen.getGameName() << " - Publisher: " << gameTen.getPublisherName() << " - Developer: " << gameTen.getDeveloperName() << endl;
		
		cout << endl;
		cout << " -- Switch -- ";
		cout << endl;
		cout << endl;
		cout << "Name: " << gameEleven.getGameName() << " - Publisher: " << gameSix.getPublisherName() << " - Developer: " << gameSix.getDeveloperName() << endl;
		cout << "Name: " << gameTwelve.getGameName() << " - Publisher: " << gameSeven.getPublisherName() << " - Developer: " << gameSeven.getDeveloperName() << endl;
		cout << "Name: " << gameThirteen.getGameName() << " - Publisher: " << gameEight.getPublisherName() << " - Developer: " << gameEight.getDeveloperName() << endl;
		cout << "Name: " << gameFourteen.getGameName() << " - Publisher: " << gameNine.getPublisherName() << " - Developer: " << gameNine.getDeveloperName() << endl;
		cout << "Name: " << gameFifteen.getGameName() << " - Publisher: " << gameTen.getPublisherName() << " - Developer: " << gameTen.getDeveloperName() << endl;
	}

	if (input == 3)
	{
		system("CLS");
		cout << endl;
		cout << " --- Make Achievement Section --- " << endl;
	}

	if (input == 4)
	{
		system("CLS");
		cout << endl;
		cout << " ---  Achievements --- " << endl;
	}





	return 0;
}

