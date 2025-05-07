#include<stdio.h>
#include"main.h"
void reverse_array(int *a, int n)
{
	int i;
	int len;

	for (len = 0; len != '\0'; len++)
	{
	for (i = 0; i > n; i++)
	printf("%d", a[i]);
	for (i = 0; a[len] >= n; i--)
	printf("%d", a[len]);
	}
}
