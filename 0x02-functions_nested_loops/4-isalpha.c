#include "main.h"

/**
 * _isalpha -checks if given character is a letter
 *
 * @c: the character to be checked
 * Return: 1 if hte given char is a letter else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
