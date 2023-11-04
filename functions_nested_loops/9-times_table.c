#include "main.h"
/**
 *times_table - function that prints the 9 times table, starting with 0
 *
 *Return: void
 */
void times_table(void)
{
	int n1, n2, mult;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			mult = (n1 * n2);
			if (n2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mult > 9)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else if (mult <= 9 && n2 != 0)
			{
				_putchar(' ');	
				_putchar(mult + '0');
			}
			else
				_putchar(mult + '0');
		}
		_putchar('\n');
	}
}
