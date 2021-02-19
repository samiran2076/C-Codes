/*Write a Program to insert an element in the specified location of an array. The
elements of the array and the position along with the element which needs to be
inserted will be user input.*/

#include<stdio.h>
int main()
{
	int i,j,k,n,pos,ele,a[10];
	
	printf("enter the length of array:");
	scanf("%d",&n);
	
	printf("enter the position where is to be inserted:");
	scanf("%d",&pos);
	
	printf("enter the element to be inserted:");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&a[i]);
	}
	for(j=n;j>0;j--)
	{
		a[j+1]=a[j];
	}
	a[pos]=ele;
	for(k=0;k<n+1;k++)
	{
		printf("\n%d",a[k]);
	}
	
	return 0;
}
