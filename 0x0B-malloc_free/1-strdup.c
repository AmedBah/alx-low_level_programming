#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * input string
 * @str: input string to duplicate
 *
 * Return: pointer to the newly allocated copy of the string
 * or NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
size_t len = strlen(str);
char *dup = malloc(len + 1);

if (str == NULL)
{
return (NULL);
}

if (dup == NULL)
{
return (NULL);
}

strcpy(dup, str);
return (dup);
}

