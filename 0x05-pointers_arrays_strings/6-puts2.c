#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int len = 0, i;

	for (;*str != '\0';)
	{
		len++;
		str++;
	}

	for (i = 0; str[i] != '\0' && i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');

}
