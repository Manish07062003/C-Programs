#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n>4 && n%2==1)
	{
	for (int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if (i==1 || i==n || j==i || j==1 || j==n || j==n-i+1 ){
					printf("*");
			}
				else{
					printf(" ");
				}
		}
		printf("\n");
	}
	}
	else{
		printf("invalid");
	}
}
