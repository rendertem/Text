#include "all.h"

void monster();
void e2g();
void e2gg();
void e2ggg();
void e2gggl();
void e2gggr();
void e2ggg8();
void e2gggg();
void e2gggg8();
void e2ggggg();
void e2gggggr();
void e2gggggl();
void e2ggggg8();
void e2ggggglg();
void e2ggggglg8();
void e2ggggglgg();
void e2ggggglggr();
void e2ggggglggl();
void e2ggggglgg8();
void e2ggglg();
void e2ggglg8();
void e2ggglgg();
void e2ggglggr();
void e2ggglggl();
void e2ggglgg8();
void e2ggglgglg();
void e2ggglgglgr();
void e2ggglgglgl();
void e2ggglgglg8();
void e2ggglgglg();
void e2ggglgglg8();
void e2ggglgglgg();
void e2ggglgglggr();
void e2ggglgglggl();
void e2ggglgglgg8();
void e2ggglgglggrg();
void e2ggglgglggrg8();
void e2ggglgglggrgg();
void e2ggglgglggrggr();
void e2ggglgglggrggl();
void e2ggglgglggrgg8();
void e2ggglgglggrggrg();
void e2ggglgglggrggrg8();
void e2ggglgglggrggrgg();
void e2ggglgglggrggrgg8();
void e2ggglggrglgg();
void e2ggglggrglggr();
void e2ggglggrglggl();
void e2ggglggrglgg8();
void e2ggglggrglggg();
void e2ggglggrglggg8();
void e2ggglggrglgggg();
void e2ggglggrglggggr();
void e2ggglggrglggggl();
void e2ggglggrglgggg8();
void e2ggglggrglgggglg();
void e2ggglggrglgggglg8();
void e2ggglggrglgggglgg();

extern int punkte;
extern int punkteMax;
extern int schwertSchtaerke;
extern int schwertHaltbarkeit;
int punkteL2 = 0;
int punkteMaxL2 = 20;
int leben = 100;
int geld = 0;

int lebenM1 = 2;
const char nameM1[] = "Zombie";
const int angriffM1 = 10;
const int geldM1 = 10;
void (*fluchtM1) () = e2ggg;

bool s1d = true;
int s1a = 4;
int s1h = 20;
bool s2d = true;
int s2a = 3;
int s2h = 15;
bool s3d = true;
int s3a = 2;
int s3h = 10;

void monster(const char* name, int* lebenM, const int angriff, const int geldBekommen, void (*fluchtHin) ())
{
	int t = 0;
	if((*lebenM) > 0)
	{
		do
		{
			printf("Vor ihnen steht ein Monster (%s).\n\tSie können ...\n", name);
			schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
			printf("\t\t 1) ... versuchen zu fliehen.\n");
			printf((schwertSchtaerke == 0) ? "" : "\t\t 2) ... mit ihrem Schwert angreifen.\n");
			printf(PROMPT);
			t = readInt();
			cls();
			if(t == 1)
			{
				if((rand() % (*lebenM)) == 0)
				{
					printf("Sie sind erfolgreich geflohen.\n");
					fluchtHin();
					exit(0);
				}
				else
				{
					printf("Ihr Fluchtversuch ist gescheitert.\n");
				}
			}
			else if(t == 2 && schwertSchtaerke > 0)
			{
				printf("Sie haben das Monster (%s) angegriffen.\n", name);
				schwertHaltbarkeit--;
				(*lebenM) -= schwertSchtaerke;
				if((*lebenM) <= 0)
				{
					printf("Sie haben das Monster (%s) besiegt.\nSie bekommen %dŒ.\n", name, geldBekommen);
					geld += geldBekommen;
					punkte += 20;
					punkteL2 += 20;
					waitNewLine();
					return;
				}
				schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
			}
			else
			{
				cls();
				fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
				t = 0;
			}
			waitNewLine();
			cls();
			printf("Das Monster (%s) greift an.\nSie verlieren %d Leben.\n", name, angriff);
			leben -= angriff;
			waitNewLine();
			if(leben <= 0)
			{
				printf("Das Monster (%s) hat Sie getötet.\n", name);
				printf("GAME OVER\n");
				exit(0);
			}
			printf("Sie haben nun noch %d Leben\n", leben);
			t = 0;
		} while(t == 0);
	}
}

void e2gggr()
{
	cls();
	int t = 0;
	do
	{
		printf("Hier ist nichts besonderes.\n\tSie können ...\n");
		printf("\t\t 1) ... sich nach links drehen.\n");
		printf("\t\t 2) ... sich um 180° drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggg();
		}
		else if(t == 2)
		{
			e2gggl();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggglgg()
{
	cls();
	int t = 0;
	do
	{
		printf("Hier ist nichts besonderes.\n\tSie können ...\n");
		printf("\t\t 1) ... sich nach links drehen.\n");
		printf("\t\t 2) ... sich nach rechts drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			//e2ggglggl();
		}
		else if(t == 2)
		{
			//e2ggglggr();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggglg()
{
	cls();
	int t = 0;
	do
	{
		printf("Hier ist nichts besonderes.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... sich um 180° drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggglgg();
		}
		else if(t == 2)
		{
			e2gggr();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2gggl()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Rechts neben ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich nach rechts drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggglg();
		}
		else if(t == 2)
		{
			e2ggglgg();
		}
		else if(t == 3)
		{
			e2ggg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggggglg8()
{
	printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
	exit(0);
}

void e2gggggr()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Hinter und rechts neben ihnen ist eine Falle%s.\n\tSie können ...\n", s1d ? " und unter ihnen ist ein Schwert Stärke 4" : "");
		printf("\t\t 1) ... sich nach rechts drehen.\n");
		printf("\t\t 2) ... sich um 180° drehen.\n");
		printf(s1d ? "\t\t3) ... das Schwert nehmen" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggggg8();
		}
		else if(t == 2)
		{
			e2gggggl();
		}
		else if(t == 3 && s1d)
		{
			schwertSchtaerke = 4;
			schwertHaltbarkeit = 20;
			punkte += 80;
			punkteL2 += 80;
			s1d = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			e2gggggr();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggggg8()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Vor und rechts neben ihnen ist eine Falle%s.\n\tSie können ...\n", s1d ? " und unter ihnen ist ein Schwert Stärke 4" : "");
		printf("\t\t 1) ... sich nach rechts drehen.\n");
		printf("\t\t 2) ... nach vorne gehen.\n");
		printf("\t\t 3) ... nach vorne hüpfen.\n");
		printf(s1d ? "\t\t4) ... das Schwert nehemen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2gggggl();
		}
		else if(t == 2)
		{
			//e2gggg8();
		}
		else if(t == 3)
		{
			//e2ggg8();
		}
		else if(t == 4 && s1d)
		{
			schwertSchtaerke = 4;
			schwertHaltbarkeit = 20;
			punkte += 80;
			punkteL2 += 80;
			s1d = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			e2ggggg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2gggggl()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Vor und links neben ihnen ist eine Falle%s.\n\tSie können ...\n", s1d ? " und unter ihnen ist ein Schwert Stärke 4" : "");
		printf("\t\t 1) ... sich nach links drehen.\n");
		printf("\t\t 2) ... nach vorne gehen.\n");
		printf("\t\t 3) ... nach vorne hüpfen.\n");
		printf(s1d ? "\t\t4) ... das Schwert nehemen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggggg8();
		}
		else if(t == 2)
		{
			//e2ggggglg();
		}
		else if(t == 3)
		{
			//e2ggggglgg();
		}
		else if(t == 4 && s1d)
		{
			schwertSchtaerke = 4;
			schwertHaltbarkeit = 20;
			punkte += 80;
			punkteL2 += 80;
			s1d = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			e2ggggg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggggg()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Hinter und links neben ihnen ist eine Falle%s.\n\tSie können ...\n", s1d ? " und unter ihnen ist ein Schwert Stärke 4" : "");
		printf("\t\t 1) ... sich nach links drehen.\n");
		printf("\t\t 2) ... sich um 180° drehen.\n");
		printf(s1d ? "\t\t3) ... das Schwert nehemen.\n" : "");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2gggggl();
		}
		else if(t == 2)
		{
			e2ggggg8();
		}
		else if(t == 3 && s1d)
		{
			schwertSchtaerke = 4;
			schwertHaltbarkeit = 20;
			punkte += 80;
			punkteL2 += 80;
			s1d = false;
			printf("Sie haben das Schwert genommen, bleiben aber stehen.\n");
			waitNewLine();
			e2ggggg8();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2ggggglg()
{
	printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
	exit(0);
}

void e2ggg()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Vor ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf("\t\t 3) ... sich nach links drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			printf("Sie sind in eine Falle getappt.\nGAME OVER\n");
			exit(0);
		}
		else if(t == 2)
		{
			e2ggggg();
		}
		else if(t == 3)
		{
			e2gggl();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2gggg8()
{
	printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
	exit(0);
}

void e2ggg8()
{
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Hinter ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... sich nach rechts drehen.\n");
		printf("\t\t 2) ... sich um 180° drehen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2gggl();
		}
		else if(t == 2)
		{
			e2ggg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void e2gggg()
{
	printf("Sie sind in eine Falle getappt.\n\tGAME OVER\n");
	exit(0);
}

void e2gg()
{
	cls();
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	monster("Zombie", &lebenM1, angriffM1, geldM1, fluchtM1);
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	cls();
	int t = 0;
	do
	{
		printf("Achtung: Zwei vor ihnen ist eine Falle.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2ggg();
		}
		else if(t == 2)
		{
			printf("Sie sind in eine Falle getappt.\nGAME OVER\n");
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

void e2g()
{
	cls();
	if(lebenM1 > 0)
	{
		printf("Sie sind auf ein Monster (%s) getreten. Dieses hat Sie sofort getötet.\nGAME OVER\n", nameM1);
		exit(0);
	}
	int t = 0;
	do
	{
		printf("Hier ist nichts besonderes.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus laufen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2gg();
		}
		else if(t == 2)
		{
			e2ggg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void play2()
{
	cls();
	printf("LEVEL 2 (%dP)\n", punkteMaxL2);
	waitNewLine();
	cls();
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	monster("Zombie", &lebenM1, angriffM1, geldM1, fluchtM1);
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	cls();
	int t = 0;
	do
	{
		printf("Sie sind am am anfang des 2. Levels.\n\tSie können ...\n");
		printf("\t\t 1) ... gerade aus gehen.\n");
		printf("\t\t 2) ... gerade aus hüpfen.\n");
		printf(PROMPT);
		t = readInt();
		if(t == 1)
		{
			e2g();
		}
		else if(t == 2)
		{
			e2gg();
		}
		else
		{
			cls();
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}

void istallprogrammt()
{
	e2g();
	e2gg();
	e2ggg();
	e2gggl();
	e2gggr();
	e2ggg8();
	e2gggg();
	e2gggg8();
	e2ggggg();
	e2gggggr();
	e2gggggl();
	e2ggggg8();
	e2ggggglg();
	e2ggggglg8();
	//e2ggggglgg();
	//e2ggggglggr();
	//e2ggggglggl();
	//e2ggggglgg8();
	//e2ggglg();
	//e2ggglg8();
	//e2ggglgg();
	//e2ggglggr();
	//e2ggglggl();
	//e2ggglgg8();
	//e2ggglgglg();
	//e2ggglgglgr();
	//e2ggglgglgl();
	//e2ggglgglg8();
	//e2ggglgglg();
	//e2ggglgglg8();
	//e2ggglgglgg();
	//e2ggglgglggr();
	//e2ggglgglggl();
	//e2ggglgglgg8();
	//e2ggglgglggrg();
	//e2ggglgglggrg8();
	//e2ggglgglggrgg();
	//e2ggglgglggrggr();
	//e2ggglgglggrggl();
	//e2ggglgglggrgg8();
	//e2ggglgglggrggrg();
	//e2ggglgglggrggrg8();
	//e2ggglgglggrggrgg();
	//e2ggglgglggrggrgg8();
	//e2ggglggrglgg();
	//e2ggglggrglggr();
	//e2ggglggrglggl();
	//e2ggglggrglgg8();
	//e2ggglggrglggg();
	//e2ggglggrglggg8();
	//e2ggglggrglgggg();
	//e2ggglggrglggggr();
	//e2ggglggrglggggl();
	//e2ggglggrglgggg8();
	//e2ggglggrglgggglg();
	//e2ggglggrglgggglg8();
	//e2ggglggrglgggglgg();
}
