#include<stdio.h>
#include<string.h>
#include"main.h"
int strlen(char *s)
//this the first way useing a builte in function
int main()
{
	char me[] = "this is a code";
	int leng;

	leng = strlen(me);

	printf("%d", leng);

	strlen();

	return(0);
}
int strlen(char *s)
{
	char s = "code with max-well is cool\0";

	int leng;

	for(leng = 0; s[leng] != '\0'leng++);
	{
	
	printf("the leng %d\n", leng);
	}
	return(leng);
	
}
