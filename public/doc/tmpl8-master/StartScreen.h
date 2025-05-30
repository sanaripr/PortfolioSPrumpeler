#pragma once
class StartScreen
{
public:
	StartScreen();
	void set_StartScreen_Active(bool sssa);
	bool get_StartScreen_Loop();

private:
	bool StartScreenActive;
};
