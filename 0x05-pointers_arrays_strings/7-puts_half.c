#include "main.h"
/*
 * puts_half - should print the second half of the string
 * @str: string to print
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
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
