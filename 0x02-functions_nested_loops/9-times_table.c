#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		_putchar('0');

	for (x = 0; x < 10; x++)
	{
		int sum = x * y;

		_putchar(',');
	if (sum / 100 == 0)
	{
		_putchar(32);
	}

	if (sum / 10 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 10));
	}
	if (sum % 10 == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0' + (sum % 10));
	}

	}
	_putchar('\n');

	}
}
