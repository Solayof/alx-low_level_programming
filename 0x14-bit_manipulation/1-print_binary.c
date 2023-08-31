#include "main.h"
#include <stdio.h>
/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	unsigned long int n_dup = n, mask = 1;
	int ln = 0;

	while (n_dup > 0)
	{
		ln++;
		n_dup >>= 1;
	}
	ln -= 1;

	if (ln > 0)
		mask = mask << ln;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
