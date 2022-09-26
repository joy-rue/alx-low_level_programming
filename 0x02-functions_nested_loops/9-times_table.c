# includes "main.h"

/**
 * times_table - returns the times table of 9
 *
 * Return: None
 */

void times_table(void)
{
	int factor;
	int factor1;

	for (factor = 0; factor <= nine; factor++)
	{
		for (factor1 = 0; factor1 <= 9; factor1++)
		{
			_putchar(factor * factor1 + '0');
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
