#include<stdio.h>
void reset_to_98(int n){

	int *amb = &n;

	printf("value one %d\n", n);


	*amb = 44;

	printf("value two %d\n", n);
}
