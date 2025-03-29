#include<stdio.h>
int main(void) {
	int l;

	for (l = 0; l < 16; l++) {

	if (l < 10){
		putchar(l + '0');
	}
	else 
	{
		putchar(l - 10 + 'a');
	}
	}
	putchar('\n');
	return (0);
}
