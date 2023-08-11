#include "main.h"
#include <stdlib.h>


/**
 * _steprintf - print string only follow by new line
 *  @s: string to print.
 */

_strprintf(char *s)
{
       	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++
	}
	
	_putchar('\0');
}


/**
 * isnum - determines if the string arg is a num
 * convert the string arg to number if.
 * @s: string to test and convert to number
 */


int isnum(char *s)
{
       	int i;

	char *err = "Error";
	for (i = 0; s(i) != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			_strprintf(err);
			exit(98);
		}
	}

	return (atoi(s));
}
 

/**
 * numprintf - print number to standard output
 * @num: number to print.
 */

numprintf(int num)
{
	int x = num;

	if (x > 9)
	{
		numprintf(x / 10);
	}
	_putchar(x % 10 + '0');
}

/**
 * main - main entry.
 * @numc: counter: numbers of arguments.
 * @numarr: array holding the numbers.
 * Return: returns 0 if successful.
 */

int main(int numc, char **numarr)
{
	char *err = "Error";
	int num1, num2, mul;

	if (numc != 3)
	{

		_strprintf(err);
		exit(98);
	}

	num1 = numarr[1];
	num2 = numarr[2];

	mul = num1 * num2;

	numprintf(mul);
	_putchar('\0')
}
