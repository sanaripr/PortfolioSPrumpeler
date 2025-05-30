#include "precomp.h"
#include "resource.h"

resource::resource()
{
	wood_Amount = 0;
	stone_Amount = 0;

	coins_Amount = 0;
}

void resource::set_Wood_Amount(double swa)
{
	wood_Amount = swa;
	return;
}

void resource::set_Stone_Amount(double ssa)
{
	stone_Amount = ssa;
	return;
}

void resource::set_Coins_Amount(double sca)
{
	coins_Amount = sca;
	return;
}

double resource::get_Wood_Amount()
{
	return wood_Amount;
}

double resource::get_Stone_Amount()
{
	return stone_Amount;
}

double resource::get_Coins_Amount()
{
	return coins_Amount;
}
