#include <stdio.h>

/**
 * main  -print combinations of all single digits
 *
 * Return: always zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
