#include<stdio.h>
#include<stdlib.h>
#include"doh.h"
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d -> name);
		free(d -> owner);
		free(d);
	}
}
