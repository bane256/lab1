#include <iostream>
#include <string.h>
#include "Platforms.h"
#include "Game.h"
using namespace std;

int main()
{
	
	Platforms platformOne("Playstation_5","Sony","gameOne2");
	
	Game gameOne2("God Of War","Santa Monica Studio","Sony Interactive Entertainment");

	
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
	cout << "3 - Display custom achievments ";
	cout << endl;
	cout << endl;
	cout << "4 - Make custom achievments ";
	cout << endl;
	cout << endl;
	cout << "Menu choice: ";
	int input;
	cin >> input;

	if (input == 1)
	{
		system("CLS");
		cout << endl;
		cout << "Name: " << platformOne.getPlatformName() << endl;
		cout << endl;
		cout << "Manufacturer Name: " << platformOne.getPlatforManufacturermName() << endl;
		cout << endl;
		cout << platformOne.getGame() << endl;
		
		

	}
	
	if (input == 2)
	{
		system("CLS");
		cout << endl;
		cout << gameOne2.getGameName() << endl;
		cout << endl;
		cout << gameOne2.getPublisherName() << endl;
		cout << endl;
		cout << gameOne2.getDeveloperName() << endl;

	}



	return 0;
}

