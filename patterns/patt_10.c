#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for (int j=1; j<=2*n-1-2*i; j++)
		{
			printf(" ");
		}
		if (i<n)
		{
		for (int j=1; j<=i; j++)
		{
			printf("%d",i-j+1);
		}
		}
		if (i==n)
		{
			for (int j=1; j<=n-1; j++)
			{
				printf("%d",n-j);
			}
		}
		printf("\n");
	}
	for (int i=1; i<=n-1; i++)
	{
		for (int j=1; j<=n-1-i+1; j++)
		{
			printf("%d",j);
		}
		for (int j=1; j<=2*i-1; j++)
		{
			printf(" ");
		}
		for (int j=1; j<=n-i; j++)
		{
			printf("%d",n-j-i+1);
		}
		printf("\n");
	}
}
