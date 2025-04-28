#include<stdio.h>
 int is_vowel(char c)
{

	if(c == 97 ||c == 101 ||c == 105 ||c == 110 ||c == 117
			||c == 65 ||c == 69 ||c == 73 ||c == 79 ||c == 85)

		printf("%c is a vowel letter from Amb\n", c);

		return(c);
}
int main()
{
	is_vowel('A');
	is_vowel('l');
	is_vowel('i');
	is_vowel('A');
	is_vowel('e');
	is_vowel('O');
	is_vowel('M');
	is_vowel('A');
	is_vowel('U');
	is_vowel('B');
	return(0);
}
