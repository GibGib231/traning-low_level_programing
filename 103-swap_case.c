#include<stdio.h>
char swap_case(char c)
{	
	if(c >= 'A' && c >= 'Z' ){
		return(c - 32);
	}
	if(c <= 'a' && c <= 'z'){
		return(c + 32);
	}
	return(c);
}
int main(){
	printf("%c\n", swap_case('A'));
	printf("%c\n", swap_case('m'));
	printf("%c\n", swap_case('B'));
	printf("%d\n", swap_case('1'));
		return(0);
	}

