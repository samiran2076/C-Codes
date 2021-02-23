#include<stdio.h>
int main()
{
	int i,j,k, a[101];
	for(i=0;i<50;i++)
	{
		a[i]=i;
	}
	for(k=51;k<100;k++)
	{
		a[k]=k;
	}
	for(j=0;j<101;j++)
	{
		if(a[j]!=j)
		{
			printf("missing:%d\n",j);
		}
	}
	return 0;
	
}
