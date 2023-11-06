#include "main.h"

/**
 *print_diagonal - Function that draws a diagonal line on the terminalc
 *@n: Integer variable declaration
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = i;

		for (; j > 0; j--)
		{									
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');																
	}

	if (n <= 0)
		_putchar('\n');
}
