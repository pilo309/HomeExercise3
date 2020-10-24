//Lad os antage, at følgende kode virker.Prøv at forudsige hvad der bliver udskrevet
//på skærmen.
//
//		for (char c = 'A'; c <= 'F'; c++)
//			printf_s("%c\n", c);
//
//Test det ved at skrive et program(main) med denne kode.Forstår du hvorfor det
//virker ? Ellers diskutér det med en studiekammerat(hvis ikke I finder et svar, så
//	spørg en underviser ved næste øvelsestimer).
//	Tilføj derefter følgende for - løkke til dit program(int i stedet for char) :
//	
//		for (int c = 'A'; c <= 'F'; c++)
//			printf_s("%c\n", i);
//
//Forstår du hvorfor det giver nøjagtig samme resultat ?
//
//Prøv så denne ændring(markeret med rødt) :
//		for (char c = 65; c <= 70; c++)
//			printf_s("%c\n", c);
//
//		for (int c = 65; c <= 70; c++)
//			printf_s("%c\n", i);
//
//
//Gør det nogen forskel på output på skærmen ? Hvorfor ?

//Prøv så denne ændring(markeret med rødt) :
//	for (char c = 'A'; c <= 'F'; c++)
//		printf_s("%d\n", c);
//
//	for (int c = 'A'; c <= 'F'; c++)
//		printf_s("%d\n", c);
//
//Gør det nogen forskel på output på skærmen ? Hvorfor ?

//I tilfælde, hvor man virkelig skal optimere anvendelse af hukommelse, er det derfor
//muligt, at anvende en char(8 bit) til hele tal i stedet for en short int(16 bit).Det
//forudsætter selvfølgelig, at man kun skal arbejde med hele tal i intervallet[-128; 127]
//eller[0; 255](unsigned char).

#include <stdio.h>

int main(void)
{

	for (char c = 'A'; c <= 'F'; c++)          //kører askeværdier fra A til F
		printf_s("%c\n", c);

	puts("");

	for (int d = 'A'; d <= 'F'; d++)			//kører askeværdier fra A til F hvor blot vores tæller er int
		printf_s("%c\n", d);


	for (char e = 65; e <= 70; e++)               //65 er askeværdien for stort A
		printf_s("%c\n", e);
			
	for (int f = 65; f <= 70; f++)
		printf_s("%c\n",f);

	for (char g = 'A'; g <= 'F'; g++)
				printf_s("%d\n", g);				//den printer nu i int da %d er til stede, dvs counter g=65
		
	for (int h = 'A'; h <= 'F'; h++)
				printf_s("%d\n", h);

	return 0;
}


