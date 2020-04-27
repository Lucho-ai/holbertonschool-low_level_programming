#include "holberton.h"
/**
 *  _strlen_recursion - Returns the length of a string.
 * @s: pointer of strings.
 * Return: the length of the string to the funtion.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
