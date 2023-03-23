#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_char - Prints a character
 * @list: A va_list containing the character to print
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints an integer
 * @list: A va_list containing the integer to print
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - Prints a float
 * @list: A va_list containing the float to print
 */
void print_float(va_list list)
{
	printf("%lf", va_arg(list, double));
}

/**
 * print_str - Prints a string
 * @list: A va_list containing the string to print
 */
void print_str(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
