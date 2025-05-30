#include "precomp.h"
#include "Game_Main_Loop.h"

Game_Main_Loop::Game_Main_Loop()
{
	GameMainLoopActive = false;
	ForestScreenActive = false;
}

void Game_Main_Loop::set_Game_Main_Loop_Active(bool gmla)
{
	GameMainLoopActive = gmla;
}

bool Game_Main_Loop::get_Game_Main_Loop()
{
	return GameMainLoopActive;
}


void Game_Main_Loop::set_Forest_Screen_Active(bool sfsa)
{
	ForestScreenActive = sfsa;
}

void Game_Main_Loop::set_Mine_Screen_Active(bool sfsa)
{
	MineScreenActive = sfsa;
}

bool Game_Main_Loop::get_Mine_Screen()
{
	return MineScreenActive;
}

void Game_Main_Loop::set_Market_Screen_Active(bool smarketsa)
{
	MarketScreenActive = smarketsa;
}

bool Game_Main_Loop::get_Market_Screen()
{
	return MarketScreenActive;
}

bool Game_Main_Loop::get_Forest_Screen()
{
	return ForestScreenActive;
}
