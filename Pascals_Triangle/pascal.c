#include<stdio.h>
int fact(int n);
int main()
{
	int f,n;
	printf("Enter no. of rows\n");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=n-i-1; j++)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			f=fact(i)/(fact(j)*fact(i-j));
			printf("%d ",f);
		}
		printf("\n");
	}
}
int fact(int n)
{
	int f=1;
	for(int i=1; i<=n; i++)
	{
		f=f*i;
	}
	return f;
}
