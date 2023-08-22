#include "main.h"

/**
 * swap_int - take in two variable integers and swaps them
 * @author: Thaddy
 * @a: swap and stores address of b
 * @b: swap and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;

	*b = *a;
	*a = change;

}
