#include "main.h"


/**
 * sqrt_a - returns the natural square root of a number
 * @a: input number
 * @b: iterator
 *
 * Return: the resulting square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);

	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));

}

/**
 * _sqrt_recursion - recurses the natural number
 * square root of a number
 * @n: number to calculate the square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
