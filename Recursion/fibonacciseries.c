#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int f=fib(n);
	printf("\n%d is nth fibonacci number",f);
}
int fib(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	int f=fib(n-1)+fib(n-2);
	return f;
}
