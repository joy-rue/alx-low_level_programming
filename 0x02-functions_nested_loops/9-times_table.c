# include "main.h"

/**
 * times_table - returns the times table of 9
 *
 * Return: None
 */

void times_table(void)
{
	int factor;
	int x;
	int factor1;
	int y;
	int res;

	for (factor = 0; factor <= 9; factor++)
	{
		for (factor1 = 0; factor1 <= 9; factor1++;
		{
			res = factor * factor1;

			if (res > 9)
			{
				x = res % 10;
				y = (res - x) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}

