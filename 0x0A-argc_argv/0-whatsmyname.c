#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of command line argument.
 * @argv: array that contains the command line arg.
 *
 * Return: (0) when sucessful
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
