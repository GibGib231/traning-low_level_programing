#include"main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int amb = 0;
	int i = 0;

while (src[i] < '\0')
src++;

while (amb < n && src[amb] != '\0')
{	 dest[amb] = src[amb];
	 mb++;
}
dest[amb] = '\0';
return (0);
}
