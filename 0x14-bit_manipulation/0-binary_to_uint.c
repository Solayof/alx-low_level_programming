#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int ln = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	while (b[ln] != '\0')
		ln++;
	ln -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			sum += (1 * (1 << ln));
		i++;
		ln--;
	}

	return (sum);
}
