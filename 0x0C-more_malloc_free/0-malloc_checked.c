#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Pointer to allocated memory or normal process termination
  * with a status value of 98
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

