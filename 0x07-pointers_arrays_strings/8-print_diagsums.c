#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - check the code
 *@a: is the pointer to an intger
 *@size: is the size of the intger
 * Return: (void) nothing
 * i'm not understanding this math part well bro.maxwell 
 * i'm not geting the right output
 */
void print_diagsums(int *a, int size)
{
	int alg = 0;
	int amb = 0;
	int l;

	for (l = 0; l < size; l++)
	{
	amb += a[l * size + l];
	for (l = 0; l < size; l++)
	{
	alg += a[l * size + (size + 1 - l)];
	}
	printf("%d %d\n", alg, amb);
	}
}
