#include<stdio.h>
#include"main.h"
int recursion(int n, int a)
{
	if(a * a == n){
		return a;
	}
	if(a * a > n){
		return -1;
	}
	return recursion(n, a + 1);
}
int _sqrt_recursion(int n)
{	if(n < 0){
	return -1;
	 }
	return recursion(n, 0);
}
