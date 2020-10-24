//Home ex. 3.2:
//Skriv et program med en for-løkke, som udskriver følgende tal-sekvens:
//100 90 80 70 60 50
//Skriv for-løkken i pseudokode før du skriver C kode.
//
//Pseudokode: Lave et program med forloop der starter ved 100 inkrementeres med 10 
//og slutter ved 50, alle tal udskrives

#include <stdio.h>

int main(void)

{
	int counter = 100;							//initialisere counter

	for (counter; counter >= 50; counter -= 10)			//lave forloop fra 100 til 50 med 10-tals interval
		printf_s("%d\n", counter);					//udskrive counter hver gang

	return 0;
}