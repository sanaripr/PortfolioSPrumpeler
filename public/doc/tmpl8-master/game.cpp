#include "precomp.h"
#include "game.h"
#include "Player.h"
#include "Button.h"
#include "Game_Main_Loop.h"
#include "resource.h"
#include "StartScreen.h"

extern GLFWwindow* window;

void Game::Init()
{
	m_Player = new Player;
	m_Button = new Button;
	m_Game_Main_Loop = new Game_Main_Loop;
	m_Resource = new resource;
	m_StartScreen = new StartScreen;
}


void Game::Tick(float deltaTime)
{
	screen->Clear(0);
	m_Player->set_Player_Pos();

	screen->Line(220, 0, 220, 720, 0xff00ff);
	screen->Line(0, 115, 1090, 115, 0xff00ff);
	screen->Line(220, 605, 1090, 605, 0xff00ff);
	screen->Line(1090, 0, 1090, 720, 0xff00ff);

	m_Button->Button_standard("Start", (1280 / 2) - 150, 625, screen);
	m_Button->Button_standard("Quit", (1280 / 2) + 50, 625, screen);

	// als startscreen true is doe alles hier onder
	if (m_StartScreen->get_StartScreen_Loop() == true)
	{
		//quit
		if (m_Player->check_Pressed_Standerd((1280 / 2) + 50, 625) == true)
		{
			exit(0);
		}

		//start
		if (m_Player->check_Pressed_Standerd((1280 / 2) - 150, 625) == true &&
			m_Player->get_Player_WoodCutting() >= 1 &&
			m_Player->get_Player_Mining() >= 1)
		{
			// startscreen to false
			m_StartScreen->set_StartScreen_Active(false);
			m_Game_Main_Loop->set_Game_Main_Loop_Active(true);
		}

		//coins + skills
		screen->Print("Choose your Skill to start:", (1280 / 2) + 475, (720 / 2) - 100, 0xFFff00);
		m_Button->Button_standard("Wood cutting skill", (1280 / 2) + 470, (720 / 2) - 85, screen);
		m_Button->Button_standard("Mining skill", (1280 / 2) + 470, (720 / 2) + 10, screen);

		if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) - 85))
		{
			m_Player->set_Player_Skills(2, 1);
			screen->Print("Cut wood, than set it for coins :)", (1280 / 2) - 100, 350, 0XFFff00);
		}

		if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 10))
		{
			m_Player->set_Player_Skills(1, 2);
			screen->Print("Mine to get stones, than sell them for coins :)", (1280 / 2) - 100, 350, 0XFFff00);
		}
		// tot hier

	}


	/// game + skill
	if (m_Game_Main_Loop->get_Game_Main_Loop() == true)
	{
		screen->Clear(0);

		screen->Line(220, 0, 220, 720, 0xff00ff);
		screen->Line(0, 115, 1090, 115, 0xff00ff);
		screen->Line(220, 605, 1090, 605, 0xff00ff);
		screen->Line(1090, 0, 1090, 720, 0xff00ff);

		screen->Print("Clicky Click", (1280 / 2) - 8, 60, 0x00ffFF);

		screen->Print("wood", 70, 30, 0xD1B18A);
		string woodAmount = to_string(m_Resource->get_Wood_Amount());
		screen->Print(woodAmount.c_str(), 105, 30, 0xD1B18A);

		screen->Print("stone", 70, 50, 0xd3D3D3);

		string stoneAmount = to_string(m_Resource->get_Stone_Amount());
		screen->Print(stoneAmount.c_str(), 105, 50, 0xd3D3D3);

		screen->Print("Coins", 70, 80, 0xFFDB58);
		string coinsAmount = to_string(m_Resource->get_Coins_Amount());
		screen->Print(coinsAmount.c_str(), 105, 80, 0xFFDB58);






		//screen->Print("SKILLS:", (1280 / 2) + 475, (720 / 2) - 100, 0xFFff00);
		m_Button->Button_standard("Forest", (1280 / 2) + 470, (720 / 2) - 85, screen);
		if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) - 85) == true)
		{
			m_Game_Main_Loop->set_Forest_Screen_Active(true);
			m_Game_Main_Loop->set_Mine_Screen_Active(false);
			m_Game_Main_Loop->set_Market_Screen_Active(false);
		}

		m_Button->Button_standard("Mine", (1280 / 2) + 470, (720 / 2) + 10, screen);
		if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 10) == true)
		{
			m_Game_Main_Loop->set_Forest_Screen_Active(false);
			m_Game_Main_Loop->set_Mine_Screen_Active(true);
			m_Game_Main_Loop->set_Market_Screen_Active(false);

		}

		m_Button->Button_standard("Market", (1280 / 2) + 470, (720 / 2) + 150, screen);
		if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 150) == true)
		{
			m_Game_Main_Loop->set_Forest_Screen_Active(false);
			m_Game_Main_Loop->set_Mine_Screen_Active(false);
			m_Game_Main_Loop->set_Market_Screen_Active(true);

		}


		//Forest Button Click
		if (m_Game_Main_Loop->get_Forest_Screen() == true)
		{
			m_Button->Button_standard("Chop trees", (1280 / 2) - 400, (720 / 2) - 225, screen);
			if (m_Player->check_Pressed_Standerd((1280 / 2) - 400, (720 / 2) - 225) && glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS && !Pressed)
			{
				m_Resource->set_Wood_Amount(m_Resource->get_Wood_Amount() + m_Player->get_Player_WoodCutting());
				Pressed = true;
			}
			if (Pressed == true)
			{
				screen->Box((1280 / 2) - 400, (720 / 2) - 225, (1280 / 2) - 400 + 150, (720 / 2) - 225 + 75, 0x0000FF);
			}
			if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE)
			{
				Pressed = false;
			}
		}

		//Mine Button Click
		if (m_Game_Main_Loop->get_Mine_Screen() == true)
		{
			m_Button->Button_standard("Mine stone", (1280 / 2) - 400, (720 / 2) - 225, screen);
			if (m_Player->check_Pressed_Standerd((1280 / 2) - 400, (720 / 2) - 225) && glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS && !Pressed)
			{
				m_Resource->set_Stone_Amount(m_Resource->get_Stone_Amount() + m_Player->get_Player_Mining());
				Pressed = true;
			}
			if (Pressed == true)
			{
				screen->Box((1280 / 2) - 400, (720 / 2) - 225, (1280 / 2) - 400 + 150, (720 / 2) - 225 + 75, 0x0000FF);
			}
			if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE)
			{
				Pressed = false;
			}
		}


		if (m_Game_Main_Loop->get_Market_Screen() == true)
		{
			////Wood selling
			m_Button->Button_standard("Cash Out Wood", (1280 / 2) - 350, (720 / 2) - 200, screen);
				screen->Print("10x Wood = 1 coin", (1280 / 2) - 325, (720 / 2) - 215, 0xFFDB58);
		
			if (m_Player->check_Pressed_Standerd((1280 / 2) - 350, (720 / 2) - 200) &&
				glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS &&
				!Pressed)
			{
				if (m_Resource->get_Wood_Amount() >= 10)
				{
					m_Resource->set_Wood_Amount(m_Resource->get_Wood_Amount() - 10);
					m_Resource->set_Coins_Amount(m_Resource->get_Coins_Amount() + 1);
					Pressed = false;
				}
			}

			////Stone Selling
			m_Button->Button_standard("Cash Out Stones", (1280 / 2) - 150, (720 / 2) - 200, screen);
				screen->Print("10x Stone = 1 coin", (1280 / 2) - 127, (720 / 2) - 215, 0xFFDB58);

			if (m_Player->check_Pressed_Standerd((1280 / 2) - 150, (720 / 2) - 200) &&
				glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS &&
				!Pressed)
			{
				if (m_Resource->get_Stone_Amount() >= 10)
				{
					m_Resource->set_Stone_Amount(m_Resource->get_Stone_Amount() - 10);
					m_Resource->set_Coins_Amount(m_Resource->get_Coins_Amount() + 1);
					Pressed = true;
				}
			}

		}



		//m_Button->Button_standard("Start", (1280 / 2) - 150, 500, screen);
		//m_Button->Button_standard("Quit", (1280 / 2) + 50, 500, screen);
	}

}
