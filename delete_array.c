/*Write a Program to delete a particular element from the specified location
from an array. The elements of the array and the position which needs to be deleted
will be user input.*/

#include<stdio.h>
int main()
{
	int i,j,k,p,n,a[10];
	printf("enter the length of array:");
	scanf("%d",&n);
	
	printf("enter the position:");
	scanf("%d",&p);
	for(k=0;k<n;k++)
	{
		printf("enter the elements:");
		scanf("%d",&a[k]);
	}
	for(i=p;i<n-1;i++)
	{
		{
			a[i]=a[i+1];
		}
	}
	for(j=0;j<n-1;j++)
	{
	printf("%d",a[j]);
	}
	return 0;
}
