#include<stdio.h>
/**
 * the main starts the program
 * this print from 0 to 9
 * and return 0
**/
void print_most_numbers(void) {
int num1;

	for (num1 = 0;  num1 <= 9; num1++)
	{
		_putchar("%d\n",num1);
	}
int main() {

	print_most_numbers();
	return (0);
}
}
