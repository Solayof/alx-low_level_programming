#include <stdio.h>
/**
 * main - main code entry
 * Description: Print all numbers of base 16 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
i	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
