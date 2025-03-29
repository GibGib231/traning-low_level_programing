#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit;
	

		lastdigit = n % 10;
	
	printf("lasidigit of %d id %d ", n, lastdigit);
	
	if (lastdigit > 5)
	{
		printf("and is greater then 5 and not 4\n");
	}
	else if (lastdigit == 0)
			{
				printf("and is 0\n");
			}
			else
			{
				printf("and is less then6 and not o\n");
			}
					return (0);
}
	
