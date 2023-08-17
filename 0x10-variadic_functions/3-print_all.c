#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints an int
 * @args: the list of args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
* print_char - prints a char
* @args: the list of args
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* print_string - prints a string
* @args: the list of args
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
* print_float - prints floats
* @args: the list of args
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
* print_all - prints all
* @format: formats of arg
*/
void print_all(const char * const format, ...)
{
	 datatype  types[] = {
		 {'c', print_char},
		 {'i', print_int},
		 {'f', print_float},
		 {'s', print_string},
		 {'\0', NULL}};
	 va_list args;
	 char *sep1 = "", *sep2 = ", ";
	 int i = 0, j;

	 va_start(args, format);
	while (format !=  NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].letter != '\0')
		{
			if (format[i] == types[j].letter)
			{
				printf("%s", sep1);
				types[j].func(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
