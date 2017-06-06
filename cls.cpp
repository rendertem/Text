#include "all.h"

int getOs()
{
	return 1;
}

void cls()
{
	if(getOs() == 1)
	{
		system("clear");
	}
	else if(getOs() == 2)
	{
		system("cls");
	}
}
