#include "hash.h"

/**
 * hash_djb2 - generate random number from the given string
 * @str: string
 * Return: int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int num = 9973;
	int i;

	while (str)
	{
		i = *str;
		num = ((num << 3) + num) + i;
		str++;
	}
	return (num);
}
