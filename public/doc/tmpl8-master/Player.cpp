#include "precomp.h"
#include "Player.h"

extern GLFWwindow* window;

Player::Player()
{
	px = 0;
	py = 0;
	pWC = 0;
	pM = 0;
}

void Player::set_Player_Pos()
{
	glfwGetCursorPos(window, &px, &py);
	return;
}

double Player::get_Player_X() const
{
	return px;
}

double Player::get_Player_Y() const
{
	return py;
}

bool Player::check_Pressed_Standerd(double x, double y)
{
	if (px >= x &&
		px <= x + 150 &&
		py >= y &&
		py <= y + 75 &&
		glfwGetMouseButton(window, 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::set_Player_Skills(double WC, double M)
{
	pWC = WC;
	pM = M;
	return;
}

double Player::get_Player_WoodCutting()
{
	return pWC;
}

double Player::get_Player_Mining()
{
	return pM;
}

