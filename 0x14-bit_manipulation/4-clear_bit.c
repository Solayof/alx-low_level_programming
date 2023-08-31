#include "main.h"



/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;
	unsigned long int mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
