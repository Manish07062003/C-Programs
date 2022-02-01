#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<=0 || n%2==0)
	{
		printf("Invalid input");
		return 0;
	}
	int a,b;
	a=(n+1)/2;
	b=(n-1)/2;
	for (int i=1; i<=a; i++)
	{
		for(int j=1; j<a-i+1; j++)
			{
				printf(" ");
			}
			for (int j=1; j<=2*i-1; j++)
			{
				printf("*");
			}
			printf("\n");
	}
	for (int i=1; i<=b; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf(" ");
		}
		for (int j=1; j<=n-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
