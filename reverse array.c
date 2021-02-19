/*WAP in C to reverse the content of a character array.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char a[10];
	printf("enter the length of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the char:");
		scanf("%c",&a[i]);
		scanf("%c",&a[i]);
	}

	for(j=n;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return 0;
}
