#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

	this is to try some thing here now
}
