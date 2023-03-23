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
	printTypeStruct printType[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_str },
		{ NULL, NULL }
	};

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		flag = 1;
		for (int j = 0; printType[j].type != NULL; j++)
		{
			if (*(printType[j].type) == format[i])
			{
				printType[j].func(a_list);
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			i++;
		else if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
