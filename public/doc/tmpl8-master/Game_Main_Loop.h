#pragma once
class Game_Main_Loop
{
public:
	Game_Main_Loop();
	void set_Game_Main_Loop_Active(bool gmla);
	bool get_Game_Main_Loop();

	void set_Forest_Screen_Active(bool sfsa);
	bool get_Forest_Screen();

	void set_Mine_Screen_Active(bool smsa);
	bool get_Mine_Screen();

	void set_Market_Screen_Active(bool smarketsa);
	bool get_Market_Screen();

private:
	bool GameMainLoopActive;
	bool ForestScreenActive;
	bool MineScreenActive;
	bool MarketScreenActive;
};

