#include "main.h"

/**
 *_strcat - Function that concatenates two strings
 *@dest:pointer char variable declaration
 *@src: pointer char variable declaration
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
