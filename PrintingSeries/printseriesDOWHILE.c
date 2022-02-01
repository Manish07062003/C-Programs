#include<stdio.h>
int main()
{
	int n;
	printf("enter a positive integer=");
	scanf("%d",&n);
	if (n<1)
	{
		printf("INVLAID INPUT");
		return 0;
	}
	int i=1;
	int a=3;
	do 
	{
		i=i+1;
		printf("%d ",a);
		a=a+5;
	}while (i<=n);	
}
