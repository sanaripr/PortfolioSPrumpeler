// Template, 2024 IGAD Edition
// Get the latest version from: https://github.com/jbikker/tmpl8
// IGAD/NHTV/BUAS/UU - Jacco Bikker - 2006-2024

#pragma once
class Player;
class Button;
class Game_Main_Loop;
class resource;
class StartScreen;

namespace Tmpl8
{

	class Game : public TheApp
	{
	public:
		// game flow methods
		void Init();
		void Tick(float deltaTime);
		void Shutdown() { /* implement if you want to do something on exit */ }
		// input handling
		void MouseUp(int) { /* implement if you want to detect mouse button presses */ }
		void MouseDown(int) { /* implement if you want to detect mouse button presses */ }
		void MouseMove(int x, int y) { mousePos.x = x, mousePos.y = y; }
		void MouseWheel(float) { /* implement if you want to handle the mouse wheel */ }
		void KeyUp(int) { /* implement if you want to handle keys */ }
		void KeyDown(int) { /* implement if you want to handle keys */ }

		bool Pressed = false;


		// data members
		int2 mousePos;

		Player* m_Player;
		Button* m_Button;
		Game_Main_Loop* m_Game_Main_Loop;
		resource* m_Resource;
		StartScreen* m_StartScreen;
	};

} // namespace Tmpl8