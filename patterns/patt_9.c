#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=0 || n%2==0)
	{
		printf("Invalid Input");
		return 0;
	}
	int a,b;
	a=(n+1)/2;
	b=(n-1)/2;
	for (int i=1; i<=a; i++)
	{
		for(int j=1; j<=a-i; j++)
			{
				printf(" ");
			}
			for (int j=1; j<=i; j++)
			{
				printf("%d",j);
			}
			for (int j=1; j<=i-1; j++)
			{
				printf("%d",i-j);
			}
			printf("\n");
	}
	for (int i=1; i<=b; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf(" ");
		}
		for (int j=1; j<=b-i+1; j++)
		{
			printf("%d",j);
		}
		for (int j=1; j<=b-i; j++)
		{
			printf("%d",a-j-i);
		}
		printf("\n");
	}
}
