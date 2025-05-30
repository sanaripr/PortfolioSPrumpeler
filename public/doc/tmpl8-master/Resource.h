#pragma once
class resource
{
public:
	resource();
	void set_Wood_Amount(double swa);
	void set_Stone_Amount(double ssa);

	void set_Coins_Amount(double sca);

	double get_Wood_Amount();
	double get_Stone_Amount();

	double get_Coins_Amount();


private:
	double wood_Amount;
	double stone_Amount;

	double coins_Amount;
};
