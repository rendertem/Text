#include "all.h"

extern int punkte;
extern int punkteMax;
extern int schwertSchtaerke;
extern int schwertHaltbarkeit;
int punkteL2 = 0;
int punkteMaxL2 = 20;
int leben = 100;
int geld = 0;

int lebenM1 = 2;

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
			t = readInt();
			system("clear");
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
				system("clear");
				fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
				t = 0;
			}
			waitNewLine();
			system("clear");
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

void e2ggg() { printf("IST NOCH NICHT IMPLEMENTIERT.\n"); }

void play2()
{
	system("clear");
	printf("LEVEL 2 (%dP)\n", punkteMaxL2);
	waitNewLine();
	system("clear");
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	monster("Zombie", &lebenM1, 10, 10, e2ggg);
	schwertSchtaerke = (schwertHaltbarkeit == 0) ? 0 : schwertSchtaerke;
	system("clear");
	int t = 0;
	do
	{
		printf("Sie sind am am anfang des 2. Levels.\n\tSie können ...\n");
		printf("\t\t 1) ... NOCH NICHT IMPLEMENTIERT.\n");
		printf("\t\t 2) ... NOCH NICHT IMPLEMENTIERT.\n");
		t = readInt();
		if(t == 1)
		{
			//
		}
		else if(t == 2)
		{
			//
		}
		else
		{
			system("clear");
			fprintf(stderr, "ERROR: Aktion \"%d\" ist unbekannt!\n\tBitte geben Sie etwas anderes ein.\n", t);
			t = 0;
		}
	} while(t == 0);
}
