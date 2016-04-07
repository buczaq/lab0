#include <stdio.h>
#include <stdlib.h>

void fibonacci(int lenght)
{
	printf("Wybrano ciag Fibonacciego. Oto %i pierwszych wyrazow:\n", lenght);
	long int a = 0, b = 1, temp;
	for(int x = 0; x < lenght; x++)
	{
		printf("%i ", a);
		temp = a;
		a = b;
		b += temp;
	}
}


void power(int lenght)
{
	printf("Wybrano ciag kolejnych poteg liczby 2. Oto %i pierwszych wyrazow:\n", lenght);
	unsigned long int n = 1;
	for(int x = 0; x < lenght; x++)
	{
		printf("%i ", n);
		n *= 2;
	}
}

int main(int argc, char *argv[])
{
	if(*argv[2]=='f')
		fibonacci(atoi(argv[1]));
	if(*argv[2]=='p')
		power(atoi(argv[1]));
	if(*argv[2]!='f' && *argv[2]!='p')
		printf("Parametr nr 2 niepoprawny!");
	printf("\n");
}