/*Write a function in C to take two integers as argument and returns the
minimum of those. Write a main function that asks the user for four integers and
then outputs the minimum by using the above function.*/
#include<stdio.h>
int min(int a,int b)
{
	int minm;
	if(a>b)
	{
		minm=b;
		printf("%d",minm);
	}
	else
	{
		minm=a;
		printf("\n%d",minm);
	}
	return minm;
}
int main()
{
	int x,y,z,w,p,q;
	printf("Enter the four number:");
	scanf("%d%d%d%d",&x,&y,&z,&w);
	p=min(x,y);
	q=min(z,w);
	//printf("\n%d",p);
	min(p,q);
	return 0;
}

