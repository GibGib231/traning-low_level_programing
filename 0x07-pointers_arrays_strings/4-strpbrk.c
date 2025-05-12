#include<stdio.h>
#include"main.h"
char *_strpbrk(char *s, char *accept)
{
	int amb;

while (*s != '\0')
{
for (amb = 0; accept[amb] != '\0'; amb++)
if (*s == accept[amb])
{
return (s);
}
s++;
}
return ('\0');
}
