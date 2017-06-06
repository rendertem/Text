#include "all.h"

int main()
{
	srand(time(NULL));
	printf("Willkommen zu %s.\n", NAME);
	int t = 0;
	do
	{
		printf("Wollen Sie direkt spielen (1) oder weitere Informationen (2) zu %s haben?\n", NAME);
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			play();
		}
		else if(t == 2)
		{
			info();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}
