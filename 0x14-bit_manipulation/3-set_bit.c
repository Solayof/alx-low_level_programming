#include "main.h"



/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask = 1;


	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);


	mask <<= index;
	*n = (*n | mask);

	return (1);
}
