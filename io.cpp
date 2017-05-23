#include "all.h"

int readInt()
{
	int i = 0;
	int c = 0;
	while((c = getchar()) != EOF)
	{
		if(c > '9' || c < '0')
		{
			return i;
		}
		i *= 10;
		i += c - '0';
	}
}

void waitNewLine()
{
	int c = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			return;
		}
	}
}
