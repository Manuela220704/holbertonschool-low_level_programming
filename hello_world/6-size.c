/*
 *  * File: 6-size.c
 * Author: Manuela Marin Baltan
 */

#include<stdio.h>

/**
 * main - C program: Print the size of various types of data
 *
 * Return: Always 0.
 */
int main(void)
{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", sizeof(float));
		return (0);
}
