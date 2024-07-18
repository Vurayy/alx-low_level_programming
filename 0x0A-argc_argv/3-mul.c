#include "stdlib.h"

/**
 * main - multiplies two numbers
 * @argc: number of command line argument
 * @argv : array that contains the program command line arg.
 * Return: (0) when successful
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
