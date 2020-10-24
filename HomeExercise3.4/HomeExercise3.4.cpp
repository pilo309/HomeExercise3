//Home ex. 3.4:
//Find din l�sning til Home exercise 2.3 (eller evt.l�sningsforslaget p� BB).
//Pr�v at �ndre while - l�kken til en do / while - l�kke.Hvilken forskel g�r det ? Hvis du er
//i tvivl, s� diskut�r det med en af dine medstuderende.Hvis I sammen ikke finder et
//brugbart svar, s� sp�rg en underviser ved n�ste �velsestimer.

#include <stdio.h>
#include <math.h>

//Home Exercise 2.2

//Hvad sker der, hvis du i programmet fra Home exercise 2.2 ovenfor
//indtaster et negativt tal ? Pr�v det!
//Dette er et klassisk eksempel p�, at programmet fejler hvis brugeren
//indtaster en ugyldig v�rdi.Det skal vi selvf�lgelig forhindre!!!
//Du skal derfor foretage f�lgende �ndring i programmet : Brugeren
//skal kunne indtaste et helt tal(som f�r).Hvis tallet ikke er st�rre end
//eller lig med 0 skal der udskrives en fejlmeddelelse(find selv p� en

//	passende tekst).Ovenst�ende skal gentages s� l�nge tallet ikke
//	gyldigt(st�rre end eller lig med 0).F�rst n�r v�rdien er gyldig skal
//	kvadratroden af tallet udskrives.
//	Skriv programmet i pseudokode f�r du skriver C kode.
//	NB!Dette er en meget anvendt metode til at indl�se en v�rdi fra
//	brugeren og tjekke om den indtastede v�rdi overholder en bestemt
//	betingelse.Det betyder, at programmet ikke forts�tter f�r brugeren
//	har indtastet en gyldig v�rdi.Dette forhindrer, fejl i det videre program pga.af fejl indtastning fra brugeren.

int main(void)
{
	double tal = -1;

	do
		{
			printf_s("Indtast positivt tal:\n");
			scanf_s("%lf", &tal);

			if (tal < 0)
				printf_s("Indtast VENLIGST positivt tal.");

		} while (tal < 0);									//udf�res KUN s�fremt tal er positivt

		printf_s("\nKvadratroden af dette tal er lig %lf", sqrt(tal));
	

	return 0;
}
