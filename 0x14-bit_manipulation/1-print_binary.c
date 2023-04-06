#include "main.h"
#include <stdio.h>
/**
 * print_binary - affiche la représentation binaire d'un nombre
 * @n: le nombre à afficher
 */
void print_binary(unsigned long int n)
{
if (n > 1)
	print_binary(n >> 1);
_putchar((n & 1) + '0');
}
