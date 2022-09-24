#include <stdio.h>

/**
 * main - Creating a list of alphabets in reverse order using putchar
 *
 * Return: always zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
