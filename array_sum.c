/*WAP in C to perform addition of all elements input in an integer array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0,a[10];
	printf("how many integers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The sum is :%d",sum);
	return 0;
}

