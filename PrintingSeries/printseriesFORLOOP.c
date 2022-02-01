#include<stdio.h>
int main()
{
	int n;
	printf("Enter a positive integer=");
	scanf("%d",&n);
	if (n<1)
	{
		printf("INVALID INPUT");
		return 0;
	}
	int a=3;
	for (int i=1; i<=n; i++)
	{
		printf("%d ",a);
		a=a+5;
	}
}
