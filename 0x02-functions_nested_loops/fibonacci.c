#include <stdio.h>

int main(int contador, char ** fibonacci, int a, int b, int c)
{
	 a = 0;
	 b = 1;



	for (contador = 0; contador <= 50; contador++)
	{
		c= a + b;
		printf("%d,", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
