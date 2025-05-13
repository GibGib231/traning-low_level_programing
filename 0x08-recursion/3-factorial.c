#include<stdio.h>
#include"main.h"
/*
 * factorial - cacula. all num between it
 * @n: is that number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
	{
		return (-1);
	i}
	return (n *  factorial(n - 1));
}
