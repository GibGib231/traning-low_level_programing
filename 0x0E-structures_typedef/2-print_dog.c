#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
struct dog
{
        char *name;
        char *owner;
        int age;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	;
	if (d->name == NULL)
{
		d->name = "(nil)";
}
	if (d->owner == NULL)
{
		d->owner = "(nil)";
}
		else

//		printf("Name:%s", d.name);

//	printf("name:%s age:%f owner:%s", d->name, d->age, d->owner);
}
