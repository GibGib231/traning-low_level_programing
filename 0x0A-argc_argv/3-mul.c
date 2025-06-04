#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 3){
                printf("Error\n");
        return 0;
        }

       	int amb = atoi(argv[1]);
	int alg = atoi(argv[2]);
	int sum = amb * alg;

	printf("the answer is: %d\n", sum);
	return 0;
}
