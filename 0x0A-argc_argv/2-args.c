#include <stdio.h>

/**
 * main - prints all arguements received
 * @argc: number of command line arguement
 * @argv: array that contains the program command line arguement
 *
 * Return: (0) on Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);

}
