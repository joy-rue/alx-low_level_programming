# include "main.h"

/**
 * jack_bauer - prints every minute of the 24 hours
 *
 * Return: None
 */

void jack_bauer(void)
{
	int h, h2, min, min2;

	for (h = 0; h <= 2; h++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if (h <= 1 || (h == 2 && h2 <= 3)
			{
				for (min = 0; min <= 5; min++)
				{
					for (min2 = 0; min2 <= 9; min2++)
					{
						_putchar(h + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(min + '0');
						_putchar(min2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

