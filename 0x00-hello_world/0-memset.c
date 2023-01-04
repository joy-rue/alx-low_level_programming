#include "main.h"
/**
 * _memset - fills the first n bytes with byte b
 * @s: pointer to the memory area
 * @n: the number bytes to be filled
 * @b: the byte filled into the n positions
 *
 * Return: a pointer to the filled location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
