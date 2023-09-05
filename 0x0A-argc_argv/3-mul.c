#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: numner of command line arguement
 * @argv: array that contains the commands
 *
 * Return: (0) on Success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);


}
