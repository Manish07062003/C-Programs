#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int s=sum(n);
	printf("sum of %d natural numbers is %d",n,s);
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int s=n+sum(n-1);
	return s;
}
