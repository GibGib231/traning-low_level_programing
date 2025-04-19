#include<stdio.h>
//int even_number(int a)
	
int main()
{
	int a = 1;

/*	if(255 % 10 == 1)
	{
		puts("odd num");
	}
	else
	*///	puts("even num");
	while(a <= 100)
	{

		printf("%d", a);

		a += 2;
		if(a < 100)
		putchar(44);
		putchar(32);
	}

	return(0);

}
