#include<stdio.h>
#include"main.h"
/*
*this leet funciton is t0 relpace the letter withnumber
*/
char *leet(char *str)
{
	char cah[10] = "aAeEoOtTlL";
	char amb[10] = "4433770011";
	int t;
	int i;

	for (t = 0; str[t] != '\0'; t++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[t] == cah[i])
			str[t] = amb[i];
	}
	}
	return (str);
}
