#include <stdio.h>

int n, contador, a = 0, b = 1, c

{
	for (contador = 0; contador < n - 2; contador++)
	{
		c= a + b;
		printf("%d,", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
