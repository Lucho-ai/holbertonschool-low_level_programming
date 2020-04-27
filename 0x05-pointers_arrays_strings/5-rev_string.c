#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - print string reverse.
 * @s: s have the string to print.
 * void: void
 */
void rev_string(char *s)
{
	int back, front;
	char temp;

	front = 0;
	back = 0;
	for (; s[back] != '\0';)
	{
		back++;
	}
	back = back - 1;
	for (front = 0; front <= back; front++)
	{
		temp = s[front];
		s[front] = s[back];
		s[back] = temp;
		back = back - 1;
	}
}
