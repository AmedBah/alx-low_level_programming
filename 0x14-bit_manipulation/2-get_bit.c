#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to extract, starting from 0 for the least
 *         significant bit.
 *
 * Return: The value of the bit at the specified index (0 or 1), or -1 if
 *         the index is out of range for the given unsigned long integer.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);

return ((n >> index) & 1);
}

