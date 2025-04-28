#include<stdio.h>
int main()
{
	int amb = 15;

	while (amb <= 100)
	{
//	for(amb = 15; amb <= 100; amb += 15)
	printf("%d", amb);
	amb += 15;
	
	if(amb < 100)

	putchar(44);

	putchar(32);
	}

return(0);
}

