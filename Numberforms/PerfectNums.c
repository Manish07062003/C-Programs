#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for (int i=1; i<=n-1; i++)
	{
		if (n%i==0)
		{
			sum=sum+i;
		}
	}
	if (sum==n)
	{
		printf("it is a perfect no.");
	}
	else
	{
		printf("it is not a perfect no.");
	}
}
