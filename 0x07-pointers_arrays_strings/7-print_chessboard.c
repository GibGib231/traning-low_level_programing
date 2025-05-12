#include<stdio.h>
#include"main.h"
/**
 * print_chessboard - we are having 8rowl and 8colum so we we loop each
 * @a: is the string given in the main function
 *
 * Return:(void) nothing
 */

void print_chessboard(char (*a)[8])
{

	int amb = 0;
	int alg;

	while (amb < 8)
	{
		for (alg = 0; alg < 8; alg++)
		{
		_putchar(a[amb][alg]);
		}
		amb++;
		_putchar('\n');
	}
}
