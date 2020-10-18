#include <stdio.h>

//Home ex. 3.1:
//Skriv et program med en for - løkke, som udskriver alle hele tal fra og med - 10 til og
//med 15.
//
//Skriv for - løkken i pseudokode før du skriver C kode.
//
//Pseudokode: Lave program der har et forloop der der tæller fra -10 til 15, hvor den udskriver nummeret hver gang

int main(void)
{
	int counter = -10;								//initialisere counter

	for (counter; counter < 15; counter++)			//sætte forloop der inkrementeres hvor max er 15
	printf_s("%d\n", counter);						//udskriver til bruger

	return 0;
}