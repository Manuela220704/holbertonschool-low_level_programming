/*
 * File: 1-last_digit.c
 * Author: Manuela Marin Baltan
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	printf("last digit of %d is %d and is");
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("0\n", n, last_digit);
	else
		printf("less than 6 and not 0\n", n, last_digit);
	return (0);
}
