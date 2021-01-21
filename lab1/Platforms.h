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

public:
	Platforms(string platformName, string platforManufacturermName)
	{
		PlatformName = platformName;
		PlatforManufacturermName = platforManufacturermName;
		
	}

	string getPlatforManufacturermName();
	string getPlatformName();
	
};

#endif PLATFORMS_H