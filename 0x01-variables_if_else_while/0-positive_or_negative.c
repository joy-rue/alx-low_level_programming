#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the executable function
 *
 * Description: Prints whether a number is positive , negative or neither
 * section header: the section header goes here
 * Return: just zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
