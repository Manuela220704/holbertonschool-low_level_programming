#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of elements to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *asignMemory;

	asignMemory = malloc(b);

	if (asignMemory == NULL)
		exit(98);

	return (asignMemory);
}

