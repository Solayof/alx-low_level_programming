#include "main.h"
/*
 * puts_half - prints the second half of the string followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int len = 0, n = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}

	}
	else
	{
		n = (len / 2) + 1;
		for (; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
