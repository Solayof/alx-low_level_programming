#include "main.h"



/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: first number
 * @m: second number
 * Return: how many bits unique
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int uniq;


	uniq = n ^ m;

	do {
		num += (uniq & 1);
		uniq >>= 1;
	} while	(uniq > 0);

	return (num);
}
