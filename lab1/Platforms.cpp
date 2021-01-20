#include "Platforms.h"
#include "Game.h"
#include <string.h>
#include <iostream>

using namespace std;

Game gameOne("God Of War", "Santa Monica Studio", "Sony Interactive Entertainment");


string Platforms::getPlatformName()
{
	return PlatformName;
}

string Platforms::getPlatforManufacturermName()
{
	return PlatforManufacturermName;
}

string Platforms::getGame()
{
	return Game;
}


