#include<stdio.h>
#include"main.h"
/*
*the root13 function take the first  charater to the 13 place
*/
char *rot13(char *str)
{
	char apl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int l;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (l = 0; l <= 52; l++)
	{
	if (str[i] == apl[l])
	{
	str[i] = rep[l];
	}
		}
	}
	return (str);
}
