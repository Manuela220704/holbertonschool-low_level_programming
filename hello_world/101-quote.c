/*
 * File: 101-quote.c
 * Auth: Manuela Marin
 */

#include <unistd.h>
#include<stdio.h>

/**
 * main - C program that prints already stored text
 *
 * Return: 1.
 */
int main(void)
{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);

}
