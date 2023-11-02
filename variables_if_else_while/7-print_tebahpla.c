#include <stdio.h>

/**
 * main - Program that prints the reverse alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char letters; /* Variable is declared to represent a letter */

	/* Prints lowercase letters from 'z' to 'a' */
	for (letters = 'z'; letters >= 'a' ; letters--)
	{
		putchar(letters);
	}

	putchar('\n'); /* Line break */
	return (0);
}
