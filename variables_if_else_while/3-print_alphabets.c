#include<stdio.h>

/**
 * main - Program that prints the alphabet in min and mayus
 *
 * Return: Always 0
 */
int main(void)
{
	char letters; /* Variable is declared to represent a letter */

	/* Prints lowercase letters from 'a' to 'z' */
	for (letters = 'a'; letters <= 'z' ; letters++)
	{
		putchar(letters);
	}

	/* Prints uppercase letters from 'A' to 'Z' */
	for (letters = 'A'; letters <= 'Z' ; letters++)
	{
		putchar(letters);
	}

	putchar('\n'); /* Line break */
	return (0);
}
