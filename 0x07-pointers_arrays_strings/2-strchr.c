#include<stdio.h>
#include"main.h"
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c){
		return (s);
		}
		s++;
	}
	return (NULL);
}
