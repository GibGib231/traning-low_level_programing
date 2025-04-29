#include<stdio.h>
#include<string.h>
void puts_half(char *str)
{
	int len = strlen(str);
	int hlen = len/2;
	for(int cc = 0; cc < hlen; cc++)

	printf("%c\n", str[cc]);
	printf("the leng is %d\n", len);
	return(0);
}
int main()
{
	puts_half("codeing is fun in here");
	return(0);
}
