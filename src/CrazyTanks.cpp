// CrazyTanks.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Game.h"

int main()
{ 
	Game game;
	while(!(game.isGameOver()|| game.isVictory())) {
		game.run();
	}
	system("cls");
	game.drawMap();
	getchar();
    return 0;
}

