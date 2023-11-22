#include "main.h"

/**
 *print_rev - Function that prints a string, in reverse, followed by a new lin
 *@s: Declaration of variable type char
 *Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j, large;

	for (i = 0; s[i] != '\0'; i++) /* The number of characters is stored in i */
		;

	large = i;

	for  (j = large - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
