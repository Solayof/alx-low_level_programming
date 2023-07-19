#include "main.h"
/**
 * 11-print_to_98 -prints tables
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < -9)
			{
				_putchar ((n / 10) + '0');
				-putchar ((n % 10) + '0');
				_putchar (',');
                                _putchar (' ');                           }
			else if (n = -9 && n < 10)
			{
				_putchar (n + '0');
				_putchar (',');
				_putchar (' ');
			}

			_putchar ((n / 10) + '0');
			_putchar ((n % 10) + '0');
			if (n != 98)
			{
				_putchar (',');
                                _putchar (' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n > 99)
			{
				_putchar ((n / 100) + '0');
				_putchar ((n / 10) + '0');
				_putchar ((n % 10) + '0');
				_putchar (',');
                                _putchar (' ');
			}
			_putchar ((n / 10) + '0');
                        _putchar ((n % 10) + '0');
			if (n != 98)
                        {
                                _putchar (',');                                   _putchar (' ');
                        }
		}
	}
}
