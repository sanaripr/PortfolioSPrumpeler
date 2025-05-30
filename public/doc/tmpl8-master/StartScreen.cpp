#include "precomp.h"
#include "StartScreen.h"

StartScreen::StartScreen()
{
	StartScreenActive = true;
}

void StartScreen::set_StartScreen_Active(bool sssa)
{
	StartScreenActive = sssa;
}

bool StartScreen::get_StartScreen_Loop()
{
	return StartScreenActive;
}

