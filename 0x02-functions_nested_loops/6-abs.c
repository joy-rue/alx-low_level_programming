# include "main.h"

/**
 * _abs - computes the absolute valye of an integer
 *
 * @n: the integer whose absolute is to be calculated
 * Return: the absolute value of that number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
}
