#include<stdio.h>
#include"isprime.h"
int main()
{
	int n;
	scanf("%d",&n);
	if (n<0)
	{
		printf("invalid input");
		return 0;
	}
	int status=isprime(n);
	if (status==1)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
}
