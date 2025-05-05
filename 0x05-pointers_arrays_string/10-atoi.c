#include<stdio.h>
#include"main.h"
int _atoi(char *s)
{
	int re = 0;
	int amb = -1;
	int i = 0;


	if(s[0] == '-')
	{
	amb = -1;
	i++;
	}
	for(i = 0; s[i] != '\0'; i++)
	{
		re = re*10 + s[i] - '0';
	}
	return (amb*re);
}
