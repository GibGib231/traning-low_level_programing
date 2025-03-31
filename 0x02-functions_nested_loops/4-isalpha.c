#include<stdio.h>
#include "main.h"
/* isupper this code check if c is a uppercase*/
int _isupper(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c >= 'z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
