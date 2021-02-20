/*Write a recursive function to return the factorial value of ‘n’, where ‘n’ is
passed as argument. Write a main program to check your function.*/
#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);

	}
}
int main()
{
	int x,y;
	printf("enter the np:");
	scanf("%d",&x);
	y=fact(x);
	printf("%d",y);
	return 0;
}
