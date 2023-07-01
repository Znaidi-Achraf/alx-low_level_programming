#include "main.h"
/**
* print_number - print int numbers.
* @n: number tested
* Return: always 0.
*/
void print_number(int n)
{
	unsigned int val, div, c;

	if (n < 0)
	{
		_putchar(45);
		val = n * -1;
	}
	else
	{
		val = n;
	}

	div = val;
	c = 1;

	while (div > 9)
	{
		div /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((val / c) % 10) + 48);
	}
}


