#include <stdio.h>

/**
 * main - prints lowercase letters in the alphabet using putchar
 *
 * return: just zero
 */

int main(void)
{

	char letter;
	for (letter = 'a'; letter <= 'z'; ++letter)

	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

