/*Home ex. 3.5:
Find din l�sning til Home exercise 2.5 (eller evt.l�sningsforslaget p� BB).
Det ville have v�ret meget bedre at l�se denne opgave ved brug af for - loops i
stedet for while - loops(fordi du ved pr�cis hvor mange gange, de to loops skal
	gentages).
	Foretag denne �ndring og test derefter programmet igen.
	NB!Bem�rk, at programmet ikke fungerer bedre, men koden er simplere.
*/

//Home ex. 2.5: 
//L�s Exercise 3.32 side 143 i bogen.
//Da side l�ngden skal ligger mellem 1 og 20 skal du tjekke om
//brugerens indtastning er korrekt � dvs.at du skal anvende princippet
//fra Home exercie 2.3
//Du skal anvende to loops til at udskrive firkanten � det ene loop
//inden i det andet loop.

//(Square of Asterisks) Write a program that reads in the side of a squareand then prints that
//square out of asterisks.Your program should work for squares of all side sizes between 1 and 20. For
//example, if your program reads a size of 4, it should print
//****
//****
//****
//****

#include <stdio.h>
#include <math.h>

int main(void)
{
	int size;

	while (1)

	{
		do
		{
			printf_s("Enter asterisks size.\n");
			scanf_s("%d", &size);
		} while (size < 1 || size > 20);

		for (int counter = 0; counter <= size; counter++)				//lave forloop der laver en r�kke
		{
			for (int t�ller = 0; t�ller <= size; t�ller++)				//lave forloop der laver antal stjerne i r�kke
			{
				printf_s("*");
			}
			puts("");
		}
	}



	return 0;
}

