# include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to be checked
 * Return: 1 if its positive, 0 if it's equal to 0, and -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
