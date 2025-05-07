#include<stdio.h>
#include"main.h"
#include"string.h"
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(src);
	int len2 = strlen(dest);
	int i;

	for (i = 0; i <= len2; i++)
	{
		src[len1] = dest[i];
	}
	return (dest);
}
