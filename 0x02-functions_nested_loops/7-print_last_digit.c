# include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit is to be printed
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
	{
		last_d = last_d * -1;
	}

	_putchar(last_d + '0');
	return (last_d);
}
