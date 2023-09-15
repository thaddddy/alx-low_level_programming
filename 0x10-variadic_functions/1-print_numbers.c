#include "variadic_functions.h"

/**
 * print_numbers - function that prints a number
 * @n: number of integer passed into the function
 * @seperator: string to be printed btwn numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{       
	unsigned int i, arr;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end (ptr);
}
