#include "main.h"

/**
 * print_chessboard - Function prints chessboard
 * @a: Function parameter declared
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; k++)
	{
	for (r = 0; r < 8; r++)
	putchar(a[k][r]);
	putchar('\n');
	}
}
