#include "precomp.h"
#include "Button.h"

Button::Button()
{
	buttonName = "";
	buttonX = 0;
	buttonY = 0;
	wasPressedOverButton = false;
}

void Button::Button_standard(string name, int x1, int y1, Surface* screen)
{

	screen->Box(x1, y1, x1 + 150, y1 + 75, 0x00ffFF);
	screen->Print(name.c_str(), x1 + 75 - (name.length() * 3), y1 + 34, 0xff00ff);

	//screen->Box(x1, y1, x1 + 150, y1 + 75, 0x0000FF);
	//screen->Print(name.c_str(), x1 + 60, y1 + 34, 0x00FF00);
}

void Button::set_WasPressedOverButton(bool wpob)
{
	wasPressedOverButton = wpob;
}

bool Button::get_WasPressedOverButton()
{
	return wasPressedOverButton;
}

string Button::button_Name()
{
	return buttonName;
}

int Button::button_X()
{
	return buttonX;
}

int Button::button_Y()
{
	return buttonY;
}
//0x00FF00 = green - 0xff00ff = pink - 0x0000FF = dark blue - 0x00ffFF = light blue
