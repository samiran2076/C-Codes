/*Write functions for finding LCM and HCF of two integers. Each function has
two numbers as parameters and returns the result. Write a main program that asks
the user for numbers ‘a’ and ‘b’, and then use these numbers as arguments for your
functions and print the result on the screen.*/
#include<stdio.h>
int lcm(int a,int b)
{
	int lcm,greater;
	if(a>b)
	{
		greater=a;
	}
	else
	{
		greater=b;
	}
	while(1)
	{
		if(greater%a==0 && greater%b==0)
		{
			lcm= greater;
			break;
		}
		else
		{
			greater=greater+1;
		}
	}
	printf("lcm:%d\n",lcm);
}

int hcf(int a,int b)
{
	int i,hcf,smaller;
	if(a>b)
	{
		smaller=b;
	}
	else
	{
		smaller=a;
	}
	for(i=1;i<=smaller;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
	}
	printf("hcf:%d",hcf);
}
int main()
{
	int x,y;
	printf("enter two integers:");
	scanf("%d%d",&x,&y);
	lcm(x,y);
	hcf(x,y);
	return 0;
}
