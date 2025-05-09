#include<stdio.h>
#include"main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int alg;
	unsigned int amb;
	unsigned int c = 0;

	for (amb = 0; s[amb] != '\0'; amb++)
	{
	for (alg = 0; accept[alg] != '\0'; alg++)
	{
	if ( s[amb] == accept[alg])
	{
	c++;
	}
	}
	}
	return (c);
}
