//Lad os antage, at f�lgende kode virker.Pr�v at forudsige hvad der bliver udskrevet
//p� sk�rmen.
//
//		for (char c = 'A'; c <= 'F'; c++)
//			printf_s("%c\n", c);
//
//Test det ved at skrive et program(main) med denne kode.Forst�r du hvorfor det
//virker ? Ellers diskut�r det med en studiekammerat(hvis ikke I finder et svar, s�
//	sp�rg en underviser ved n�ste �velsestimer).
//	Tilf�j derefter f�lgende for - l�kke til dit program(int i stedet for char) :
//	
//		for (int c = 'A'; c <= 'F'; c++)
//			printf_s("%c\n", i);
//
//Forst�r du hvorfor det giver n�jagtig samme resultat ?
//
//Pr�v s� denne �ndring(markeret med r�dt) :
//		for (char c = 65; c <= 70; c++)
//			printf_s("%c\n", c);
//
//		for (int c = 65; c <= 70; c++)
//			printf_s("%c\n", i);
//
//
//G�r det nogen forskel p� output p� sk�rmen ? Hvorfor ?

//Pr�v s� denne �ndring(markeret med r�dt) :
//	for (char c = 'A'; c <= 'F'; c++)
//		printf_s("%d\n", c);
//
//	for (int c = 'A'; c <= 'F'; c++)
//		printf_s("%d\n", c);
//
//G�r det nogen forskel p� output p� sk�rmen ? Hvorfor ?

//I tilf�lde, hvor man virkelig skal optimere anvendelse af hukommelse, er det derfor
//muligt, at anvende en char(8 bit) til hele tal i stedet for en short int(16 bit).Det
//foruds�tter selvf�lgelig, at man kun skal arbejde med hele tal i intervallet[-128; 127]
//eller[0; 255](unsigned char).

#include <stdio.h>

int main(void)
{

	for (char c = 'A'; c <= 'F'; c++)          //k�rer askev�rdier fra A til F
		printf_s("%c\n", c);

	puts("");

	for (int d = 'A'; d <= 'F'; d++)			//k�rer askev�rdier fra A til F hvor blot vores t�ller er int
		printf_s("%c\n", d);


	for (char e = 65; e <= 70; e++)               //65 er askev�rdien for stort A
		printf_s("%c\n", e);
			
	for (int f = 65; f <= 70; f++)
		printf_s("%c\n",f);

	for (char g = 'A'; g <= 'F'; g++)
				printf_s("%d\n", g);				//den printer nu i int da %d er til stede, dvs counter g=65
		
	for (int h = 'A'; h <= 'F'; h++)
				printf_s("%d\n", h);

	return 0;
}


