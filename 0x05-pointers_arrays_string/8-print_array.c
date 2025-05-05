#include<stdio.h>
#include"main.h"
void print_array(int *a, int n)
{


	int amb;

	for(amb = 0; amb < n; amb++)
	{
		printf("%d", a[amb]);
		if(amb != 4)
			printf(",");
	}

	printf("\n");
	
}
