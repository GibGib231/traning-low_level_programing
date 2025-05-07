#include"main.h"
int _strcmp(char *s1, char *s2)
{
	int alg = 0;

	while (s1[alg] != '\0')
	{
	if (s1[alg] == s2[alg])
	{
	alg++;
	}
	if (s1[alg] > s2[alg])
	{
	return (1);
	}
	if (s1[alg] < s2[alg])
	{
	return (-1);
	}
	}
	return (0);
}
