/*Skriv et program hvori brugeren indtaster et tal, derefter et + , -, * eller / og til sidst et
tal mere.Herefter skal resultatet af den �nskede udregning udskrives p� sk�rmen.
Her under ser du et eksempel p� en programk�rsel :*/

#include <stdio.h>

int main(void)
{

	double number1, number2, number3;
	char operator1;

	printf_s("Insert caluclation (+ - * or /)\n");
	scanf_s("%lf", &number1);
	scanf_s("\n%c", &operator1);
	scanf_s("%lf", &number2);

	switch(operator1)
		{ 
			case '+':
			printf_s(" = %f", number1 + number2);
			break;

			case '-':
			printf_s(" = %f", number1 - number2);
			break;
	
			case '*':
			printf_s(" = %f", number1 * number2);
			break;
	
			case '/':
			printf_s(" = %f", number1 / number2);
			break;
	
			default:
				printf_s("Invalid math operator");
				break;

		}

	return 0;
}