#include <stdio.h>

/**
 * main - main code entry
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int n, f, l;

	n = 0;

	while (n < 100)
	{
		l = i % 10; /* first bit */
		f = i / 10; /* second bit */

		if (l < f)
		{
			putchar(l + '0');
			putchar(f + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		n++;
	}
	putchar('\n');

	return (0);
}
