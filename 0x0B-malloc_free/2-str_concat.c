#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char *str_concat(char *s1, char *s2)
{
	int amb;
	int alg;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2 + 1;       
	char* s;

	s = malloc(len * sizeof(char));

	for (amb = 0; amb < len1; amb++)
	{
		s[amb] = s1[amb];
		for (alg = 0; alg < len2; alg++)
			s[len1 + alg] = s2[alg];
		s[len -1] = '\0';
	}
	return s;
}
