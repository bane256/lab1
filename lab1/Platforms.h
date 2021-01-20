#include <string.h>
#include <iostream>
using namespace std;

#pragma once
#ifndef PLATFORMS_H
#define PLATFORMS_H

class Platforms
{

private:
	string PlatformName;
	string  PlatforManufacturermName;
	string Game;

public:
	Platforms(string platformName, string platforManufacturermName,string game )
	{
		PlatformName = platformName;
		PlatforManufacturermName = platforManufacturermName;
		
	}


	
	string getPlatforManufacturermName();
	string getPlatformName();
	string getGame();
};

#endif PLATFORMS_H