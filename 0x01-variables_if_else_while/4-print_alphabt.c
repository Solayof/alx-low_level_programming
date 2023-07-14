#include <stdio.h>
/**
 * main - main code entry
 *  Use `putchar` to print all letters except  the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
