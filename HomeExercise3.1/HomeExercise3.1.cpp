#include <stdio.h>

//Home ex. 3.1:
//Skriv et program med en for - l�kke, som udskriver alle hele tal fra og med - 10 til og
//med 15.
//
//Skriv for - l�kken i pseudokode f�r du skriver C kode.
//
//Pseudokode: Lave program der har et forloop der der t�ller fra -10 til 15, hvor den udskriver nummeret hver gang

int main(void)
{
	int counter = -10;								//initialisere counter

	for (counter; counter < 15; counter++)			//s�tte forloop der inkrementeres hvor max er 15
	printf_s("%d\n", counter);						//udskriver til bruger

	return 0;
}