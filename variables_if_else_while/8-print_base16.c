#include<stdio.h>

/**
 *main - Program that prints all the numbers of base 16 in lowercase
 *Return: Always 0.
 */
int main(void)
{
	int n;
	char letters;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');
	return (0);
}
