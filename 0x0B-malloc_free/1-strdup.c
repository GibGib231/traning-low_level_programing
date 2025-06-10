#include<stdio.h>
#include<stdlib.h>
#include"main.h"
char *_strdup(char *str)
{
	int amb = 0;

	if(str == NULL){
		return NULL;
	}
	if(str != NULL){
	str = malloc(amb * sizeof(char));
	free(str);
	}
	return 0;
}
