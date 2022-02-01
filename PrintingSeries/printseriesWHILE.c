#include<stdio.h>
int main()
{
	int n;
	printf("enter a posstive integer");
	scanf("%d",&n);
	if (n<1)
	{
		printf("INVALID INPUT");
		return 0;
	}
	int i=1;
	int a=3;
	while (i<=n)
	{
		printf("%d ",a);
		a=a+5;
		i=i+1;
	}
}
