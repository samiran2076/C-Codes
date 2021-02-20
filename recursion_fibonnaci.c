/*The Fibonacci sequence is a sequence of numbers where the first two
numbers are 0 and 1 and the next number in the sequence is the sum of the
previous two numbers. The n’th number in the sequence can be calculated as:
f(1) = 0
f(2) = 1
f(n) = f(n - 1) + f(n - 2)*/

#include<stdio.h>
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
 int main()
 {
 	int x,y;
 	printf("enter the nth term:");
 	scanf("%d",&x);
 	y=fib(x);
 	printf("%d",y);
 	return 0;
 }
