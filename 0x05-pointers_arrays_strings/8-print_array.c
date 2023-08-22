#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: This is the input array
 * @n: This is the length of the array
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");

}
