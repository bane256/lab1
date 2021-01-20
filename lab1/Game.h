#include <string.h>
#include <iostream>
using namespace std;

#pragma once
#ifndef GAME_H
#define GAME_H

class Game
{
private:
	string GameName;
	string PublisherName;
	string DeveloperName;

public:
	Game(string gameName, string publisherName, string gameDeveloper)
	{
		GameName = gameName;
		PublisherName = publisherName;
		DeveloperName = gameDeveloper;
	}

	string getGameName();
	string getPublisherName();
	string getDeveloperName();
	


};

#endif PLATFORMS_H
