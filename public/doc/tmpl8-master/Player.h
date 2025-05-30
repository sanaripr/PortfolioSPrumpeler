#pragma once
class Player
{
public:
	Player();
	void set_Player_Pos();

	double get_Player_X() const;
	double get_Player_Y() const;
	bool check_Pressed_Standerd(double x, double y);

	void set_Player_Skills(double WC, double M);

	double get_Player_WoodCutting();
	double get_Player_Mining();

private:
	double px;
	double py;

	double pWC;
	double pM;
};
