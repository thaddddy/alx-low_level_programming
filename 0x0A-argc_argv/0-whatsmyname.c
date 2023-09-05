#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of command line arguement
 * @argv: array that contains the commandline arguement
 *
 * Return: (0) on Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
