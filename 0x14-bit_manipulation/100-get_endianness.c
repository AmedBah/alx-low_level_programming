#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if the machine is big endian, 1 if it is little endian.
 */
int get_endianness(void)
{
int test = 1;
char *test_ptr = (char *)&test;

if (*test_ptr == 1)
{
	return (1);
}
else
{
	return (0);
}
}

