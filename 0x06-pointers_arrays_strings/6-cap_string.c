#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @p: pointer argumnet
 * Description: capitalizes all words of a string
 * Return: pointer p
 */
char *cap_string(char *p)
{
	int j;

	for (j = 0; p[j] != '\0';)
	{
		if (j == 0 && p[j] >= 97 && p[j] <= 122)
		{
			p[j] = p[j] - 32;
		}
		if (p[j] >= 97 && p[j] <= 122
		    && (p[j - 1] == 32 || p[j - 1] == ','
			 || p[j - 1] == ';' || p[j - 1] == '.'
			 || p[j - 1] == '!' || p[j - 1] == '?'
			 || p[j - 1] == '"' || p[j - 1] == '('
			 || p[j - 1] == ')' || p[j - 1] == '{'
			 || p[j - 1] == '}' || p[j - 1] == '\n'
			 || p[j - 1] == '\t'))
		{
			p[j] = p[j] - 32;
		}
		j++;
	}
	return (p);
}
