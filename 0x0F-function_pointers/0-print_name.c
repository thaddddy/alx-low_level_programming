#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @f: varaible to hold the string name
 * @name: name of the perso
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
