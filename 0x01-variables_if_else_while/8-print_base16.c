#include <stdio.h>

/**
 * main - print the letters and nums in the 16 hex
 *
 *Return: returns zero
 */

int main(void)
{
	char num;
	char letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
