#include <stdio.h>

/**
 * main  -print combinations of all single digits
 *
 * Return: always zero
 */

int main(void)
{
	char num1;
	char num2;

	for( num1 = '0';num1 <= '9';num1++)
	{
		for( num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);

			if (num1 != '9' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);

}
