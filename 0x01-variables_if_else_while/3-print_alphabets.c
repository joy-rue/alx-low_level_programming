#include <stdio.h>

/**
 * main: prints the alphabets in Lower and Upper case
 *
 * Return: returns zero always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	putchar('\n');

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	return (0);
}
