#include "main.h"

/**
 * print_number - prints number
 * @n: the number to process.
 *
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	while (num >= 10)
	{
		_putchar(num / 10);
		num /= 10;
	}
	_putchar(num % 10);
}

