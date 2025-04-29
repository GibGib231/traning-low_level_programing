#include<stdio.h>
#include<string.h>
#include"main.h"
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = 0; len > i; len--)
	{
		putchar(s[len]);

	}
	putchar('\n');
}
int main()
{
	print_rev(" i do not fear computer, but i fear the lack of them ");
	return(0);
}

