#include<stdio.h>
#include"isprime.h"
#include"countofdigits.h"
int main()
{
	int n;
	scanf("%d",&n);
	if (n<0)
	{
		printf("invalid input");
		return 0;
	}
	int pow=1;
	int digits=countofdigits(n);
	for (int i=1; i<=digits-1; i++)
	{
		pow=pow*10;
	}
	int status=isprime(n);
	for (int i=1; i<=digits; i++)
	{
		if(status==0)
		{
			printf("number is not circular prime");
			return 0;
		}
		n=n%10*pow+n/10;
		printf("%d\n",n);
	}
}
