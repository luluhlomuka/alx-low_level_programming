#include "main.h"
#include <stdio.h>

/**
 * main- printa spring in reverse
 * @s: reverse a string
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\n')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	putchar(s[c]);
	}
	putchar('\n');
}
