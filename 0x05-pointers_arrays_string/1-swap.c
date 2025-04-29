#include<stdio.h>
void swap_int(int *a, int *b)
{



	return(0);
}
int main(){

	int alg = 30;
	int amb = 40;


	printf("a first num %d\nb first num %d\n", alg, amb);

	int a = 33;
	int b = 44;

	swap_int(&alg, &amb);

	printf("a sec num %d\nb sec num %d\n", a, b); 


//	swap_int();

		return(0);
}

