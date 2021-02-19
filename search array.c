/*‘n’ numbers are entered from the keyboard into an array. The number to be
searched is entered through the keyboard by the user. Write a program to find if the
number to be searched is present in the array and if it is present, display the
number of times it appears in the array.*/
#include<stdio.h>
int main()
{
	int b,i,j,k,n,count=0,a[100];
	printf("enter the length of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter no:");
		scanf("%d",&a[i]);
	}
	printf("enter the no. to be searched:");
	scanf("%d",&j);
	for(k=0;k<n;k++)
	{
		if(j==a[k])
		{
			count=count+1;
			b=a[k];
		}
	}
	if(count>0)
	{
		printf("%d present",b);
		printf("\nno. of times present:%d",count);
	}
	else if(count==0)
	{
		printf("not present");
	}
	
	return 0;
}
