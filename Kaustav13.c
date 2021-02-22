#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter x and y:");
	scanf("%f%f",&x,&y);
	if(x<2000 || x>3000)  
	{
		printf("x:%f\n",x);
	}
	else
	{
		printf("Try again\n");
	}
	if(100<y<500)
	{
		printf("y:%f",y);
	}
	else
	{
		printf("Try again");
	}
	return 0;
}
