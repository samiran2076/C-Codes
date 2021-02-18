/*‘n’ numbers are entered from the keyboard into an array. Write a program to
find out how many of them are positive, how many are negative, how many are
even and how many odd.*/
#include<stdio.h>
#include<conio.h>
int main()
{

int i,w,j,p=0,o=0,n=0,a[10];
printf("Enter how many:");
scanf("%d",&w);
for(i=0;i<w;i++)
{
	printf("enter a number:");
	scanf("%d",&a[i]);
	if(a[i]>0 && a[i]%2==0)
	{
		p=p+1;
	}
	else if(a[i]>0 && a[i]%2!=0)
	{
		o=o+1;
	}
	else if(a[i]<0)
	{
		n=n+1;
	}
}

for(j=0;j<w;j++)
{
	printf("%d\n",a[j]);
}
printf("even:%d",p);
printf("odd: %d",o);
printf("negative: %d",n);
return 0;
}
