#include "main.h"

/**
 *_memset - Function that fills memory with a constant byte.
 *@s:Pointer char variable declaration
 *@b: char variable declaration
 *@n: int variable declaration
 *Return: result of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
