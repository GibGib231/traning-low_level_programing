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
	if (n <= 0)
        {
                printf("%dis negative");
        }
        else if (n >= 0)
        {
                printf("%dis positive");
        }
        else if (n == 0)
        {
                printf("%dis 0");
        }

        return (0);


	return 0;	
}
