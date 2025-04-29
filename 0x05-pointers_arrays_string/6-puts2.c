#include<stdio.h>
#include<string.h>
void puts2(char *str)
{
	int len = strlen(str);
	for(int g = 0; g < len; g++){
	printf("%c\n", str[g]);
	}
}
int main()
{
	puts2("+231775116638");
	return(0);
}
