#include "all.h"

void eg();
void egr();
void eggg();
void eggg8();
void eg8();
void eglgg();
void eglg8();
void eglgg8();
void egl();
void egrggEnde();
void egrg();
void egrg8();

int schwertSchtaerke = 0;
int schwertHaltbarkeit = 0;
bool schwertVorhandenN1 = true;
bool schwertVorhandenN2 = true;

int punkteL1 = 0;
int punkte = 0;
const int punkteMaxL1 = 25;
const int punkteMax = 45;

void egrggEnde()
{
	cls();
	int t = 0;
	do
	{
		printf("Sie haben das Ende des erste Levels ereicht. Möchten Sie herab zu Level 2 oder einen Schritt zurücktreten?\n\tSie können ...\n");
		printf("\t\t 1) ... zu Level 2 gehen.\n");
		printf("\t\t 2) ... bei Level 1 bleiben.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			cls();
			printf("Level 1: %dP/%dP\n", punkteL1, punkteMaxL1);
			printf("Insgesammt: %dP/%dP\n\n", punkte, punkteMax);
			waitNewLine();
			play2();
		}
		else if(t == 2)
		{
			egrg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void egrg()
{
	cls();
	int t = 0;
	do
	{
		printf("Vor ihnen ist der Ausgang von Level 1.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			egrggEnde();
		}
		else if(t == 2)
		{
			egrg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void egrg8()
{
	cls();
	int t = 0;
	do
	{
		printf("Hinter ihnen ist der Ausgang von Level 1.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			egl();
		}
		else if(t == 2)
		{
			egrg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void egr()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Vor ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich nach links drehen.\n");
		printf("\t\t 4) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			printf("Sie sind in keine Falle getappt.\n");
			waitNewLine();
			egrg();
		}
		else if(t == 2)
		{
			egrggEnde();
		}
		else if(t == 3)
		{
			eg();
		}
		else if(t == 4)
		{
			egl();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eglgg()
{
	cls();
	int t = 0;
	do
	{
		printf("%s\n\tSie können ...\n", (schwertVorhandenN1) ? "Unter ihnen ist ein Schwert Stärke 1." : "Hier ist nichts besonderes.");
		printf("\t\t 1) ... sich um 180 grad drehen.\n");
		printf("\t\t 2) ... nach vorne gehen.\n");
		printf(schwertVorhandenN1 ? "\t\t 3) ... das Schwert nehmen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eglgg8();
		}
		else if(t == 2)
		{
			printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
			exit(0);
		}
		else if(t == 3 && schwertVorhandenN1)
		{
			schwertSchtaerke = 1;
			schwertHaltbarkeit = 5;
			punkte += 5;
			punkteL1 += 5;
			schwertVorhandenN1 = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			eglgg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eglgg8()
{
	cls();
	int t = 0;
	do
	{
		printf("%s\n\tSie können ...\n", (schwertVorhandenN1) ? "Unter ihnen ist ein Schwert Stärke 1." : "Hier ist nichts besonderes.");
		printf("\t\t 1) ... sich um 180 grad drehen.\n");
		printf("\t\t 2) ... nach vorne gehen.\n");
		printf("\t\t 3) ... nach vorne hüpfen.\n");
		printf(schwertVorhandenN1 ? "\t\t 4) ... das Schwert nehmen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eglgg();
		}
		else if(t == 2)
		{
			eglg8();
		}
		else if(t == 3)
		{
			egr();
		}
		else if(t == 4 && schwertVorhandenN1)
		{
			schwertSchtaerke = 1;
			schwertHaltbarkeit = 5;
			punkte += 5;
			punkteL1 += 5;
			schwertVorhandenN1 = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			eglgg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eglg()
{
	cls();
	int t = 0;
	do
	{
		printf("Hier ist nichts besonderes.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eglgg();
		}
		else if(t == 2)
		{
			printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
			exit(0);
		}
		else if(t == 3)
		{
			eglg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eglg8()
{
	cls();
	int t = 0;
	do
	{
		printf("2 Felder vor ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			egr();
		}
		else if(t == 2)
		{
			egrg();
		}
		else if(t == 3)
		{
			eglg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void egl()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Hinter ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich nach links drehen.\n");
		printf("\t\t 4) ... sich nach rechts drehen.\n");
		printf("\t\t 5) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eglg();
		}
		else if(t == 2)
		{
			eglgg();
		}
		else if(t == 3)
		{
			eg8();
		}
		else if(t == 4)
		{
			eg();
		}
		else if(t == 5)
		{
			egr();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eggg8()
{
	cls();
	int t = 0;
	do
	{
		printf("%s\n\tSie können ...\n", (schwertVorhandenN2) ? "Unter ihnen ist ein Schwert Stärke 2." : "Hier ist nichts besonderes.");
		printf("\t\t 1) ... sich um 180 grad drehen.\n");
		printf("\t\t 2) ... gerade aus gehen.\n");
		printf("\t\t 3) ... gerade aus hüpfen.\n");
		printf(schwertVorhandenN2 ? "\t\t 4) ... das Schwert nehmen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eggg();
		}
		else if(t == 2)
		{
			printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
			exit(0);
		}
		else if(t == 3)
		{
			eg8();
		}
		else if(t == 4 && schwertVorhandenN2)
		{
			schwertSchtaerke = 2;
			schwertHaltbarkeit = 10;
			punkte += 20;
			punkteL1 += 20;
			schwertVorhandenN2 = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			eggg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eggg()
{
	cls();
	int t = 0;
	do
	{
		printf("%s\n\tSie können ...\n", (schwertVorhandenN2) ? "Unter ihnen ist ein Schwert Stärke 2." : "Hier ist nichts besonderes.");
		printf("\t\t 1) ... sich um 180 grad drehen.\n");
		printf(schwertVorhandenN2 ? "\t\t 2) ... das Schwert nehmen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eggg8();
		}
		else if(t == 2 && schwertVorhandenN2)
		{
			schwertSchtaerke = 2;
			schwertHaltbarkeit = 10;
			punkte += 20;
			punkteL1 += 20;
			schwertVorhandenN2 = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			eggg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eg8()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Links neben ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... sich nach links drehen.\n");
		printf("\t\t 2) ... sich nach rechts drehen.\n");
		printf("\t\t 3) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			egr();
		}
		else if(t == 2)
		{
			egl();
		}
		else if(t == 3)
		{
			eg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void eg()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Rechts neben ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich nach links drehen.\n");
		printf("\t\t 4) ... sich nach rechts drehen.\n");
		printf("\t\t 5) ... sich um 180 grad drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
			exit(0);
		}
		else if(t == 2)
		{
			eggg();
		}
		else if(t == 3)
		{
			egl();
		}
		else if(t == 4)
		{
			egr();
		}
		else if(t == 5)
		{
			eg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void play()
{
	cls();
	printf("LEVEL 1 (%dP)\n", punkteMaxL1);
	waitNewLine();
	cls();
	int t = 0;
	do
	{
		printf("Sie sind am Eingang eines Verlieses.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			eg();
		}
		else if(t == 2)
		{
			printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
			exit(0);
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}
