#include<stdio.h>
int main()
{
	int i,j,a[100],n,min,max;
	printf("enter the length:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
		if(a[j]<min)
		{
			min=a[j];
		}
	}
	printf("max:%d\n",max);
	printf("min:%d",min);
	return 0;
}
