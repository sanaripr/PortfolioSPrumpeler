#pragma once
class Button
{
public:
	Button();
	void Button_standard(string name, int x1, int y1, Surface* screen);
	void set_WasPressedOverButton(bool wpob);
	bool get_WasPressedOverButton();

	string button_Name();
	int button_X();
	int button_Y();

private:
	string buttonName;
	int buttonX;
	int buttonY;
	bool wasPressedOverButton;
};
