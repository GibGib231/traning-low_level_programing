#include<stdio.h>
int main(int argc, char *argv[])
{
	int amb;
	for(amb = 0; amb != argc; amb++)
	printf("%s\n", argv[amb]);;
	return 0;
}
