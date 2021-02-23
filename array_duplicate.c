#include<stdio.h>
int main()
{
	int i,j,count=0;
	int a[10]={0,1,1,2,2,3,5,5,6,7};
	for(i=0;i<10;i++)
	{
		if(a[i]==a[i+1])
		{
			//a[i+1]=a[i+2];
			count=count+1;
			printf("duplicate:%d\n",a[i]);
		}
	}
	printf("%d",count);
	return 0;
	
}
