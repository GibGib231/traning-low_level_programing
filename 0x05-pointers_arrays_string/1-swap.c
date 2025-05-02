#include<stdio.h>
void swap_int(int *a, int *b)
{

	int alg;

	alg = *a;
	*a = *b;
	*b = alg;
}

