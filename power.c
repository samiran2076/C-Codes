/*Q12.Write a function myPower( a, b ), to calculate the value of a raised to b. Test
your function from main.*/

#include<stdio.h>
void myPower( a, b )
{
	int i,res=1;
	/*printf("enter a:");
	scanf("%d",&a);
	printf("enter the power:");
	scanf("%d",&b);*/
	for(i=1;i<=b;i++)
	{
		res=res*a;
	}
	printf("x^y:%d",res);
}

int main()
{
	int x,y;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	myPower(x,y);
	return 0;
}
