#include<stdio.h>
//int add(int a)
int main()
{
	int amb = 0;
	
//	for(amb = 2; amb <= 16, amb += 2;)

	while(amb <= 100)
	{

		amb += 2;
		if(amb < 10)
		{
			putchar(amb + 48);
		}
		else
		{
			putchar(amb / 10 + 48);

			putchar(amb % 10 + 48);
		}
		 
	putchar('\n');
	
	}
	return(0);
	
}
