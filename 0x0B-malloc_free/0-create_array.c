#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with a char.
 * @size: the size of the array to be created.
 * @c: the character to initialize each element of the array with.
 *
 * Return: NULL if size = 0, a pointer to the array otherwise.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}

array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);

}

