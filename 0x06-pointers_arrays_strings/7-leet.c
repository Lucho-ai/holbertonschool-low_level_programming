#include "holberton.h"
/**
 * leet - mozart do the music for allte people
 * a blank line
 * @m: this parameter is the string to encrypt
 * Description: mozart do the music for all the people)?
 *(section header: the header of this function is holberton.h)*
 * Return: this return a char.
 */
char *leet(char *m)
{
	int i, j;
	char chars[] = "aAeEoOtTlL";
	char crypt[] = "4433007711";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; crypt[j] != '\0'; j++)
		{
			if (m[i] == chars[j])
			{
				m[i] = crypt[j];
			}
		}
	}
	return (m);
}
