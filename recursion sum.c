/*Write a recursive function to calculate sum of first ‘n’ natural numbers where
‘n’ is passed to the function as an argument. Test your function by writing a main
program.*/

#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
	return n+sum(n-1);
	}
}
int main()
{
	int x;
	printf("enter the nth number:");
	scanf("%d",&x);
	sum(x);
	printf("sum:%d",sum(x));
	return 0;
}
