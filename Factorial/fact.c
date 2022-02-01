#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<0)
	{
		printf("invalid input");
		return 0;
	}
	int fact=1;
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	printf("%d",fact);
}
