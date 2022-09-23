#include <stdio.h>

/**
 *main - print lower case alphabet excpet q and r
 *
 * Return: zero always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)

		if (letter != 'q' &&  letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
