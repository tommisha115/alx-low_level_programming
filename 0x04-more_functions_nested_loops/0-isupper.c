#include "main.h"

/**
 * _issupper - check if a char is uppercase
 * @c - variable text
 * Return: always 0
 */
int _issupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
