#include<stdio.h>
#include"main.h"
int _pow_recursion(int x, int y)
{
	int pow = 1;
	int i;

	for (i = 1; i <= y; i++){
		pow = pow * x;
	}
	return (pow);
}
