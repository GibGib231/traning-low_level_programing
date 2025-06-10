#include<stdio.h>
#include<stdlib.h>
#include"main.h"
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int amb;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = malloc(size * sizeof(1));
		if (array != NULL)
		{
			for (amb = 0; amb < size; amb++)
				array[amb] = c;
		}
	}
	return (array);
}
