#include "main.h"

/**
 * get_endianness - checks either little endianness of big endiainness.
 * Return: first value stored.
 */

int get_endianness(void)
{

	int num = 0x00000001;
	char *i = (char *)&num;

	return (i[0]);
}
