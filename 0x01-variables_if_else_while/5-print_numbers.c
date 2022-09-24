#include <stdio.h>

/**
 * main - print single digit numbers of base 10
 *
 *Return: returns zero
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
