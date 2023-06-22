#include "main.h"

/**
 * _isalpha - checks if input is lowercase or upercase
 * @c: variable to determine in input is lowercase
 * Return: 0 if succesful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchart('\n');
}
