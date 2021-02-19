/*WAP in C to find the largest and smallest element in an integer array./*/
#include<stdio.h>
int main()
{
	int i,j,n,max,min,a[10];
	printf("enter the length of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers:");
		scanf("%d",&a[i]);
		max=a[0];
		min=a[0];
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("max:%d\n",max);
	printf("min:%d",min);
	return 0;
	
}
