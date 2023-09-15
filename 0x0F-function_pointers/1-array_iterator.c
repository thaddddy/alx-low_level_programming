#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: taregt array
 * @size: array size
 * @action: function pointer to an array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
