#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<1)
	{
		printf("invalid input");
		return 0;
	}
	int x;
	scanf("%d",&x);
	int sum=x;
	int fact=6;
	int num=(-1*x*x*x);
	for (int i=2; i<=n; i++)
	{
		sum=sum+(num/fact);
		num=num*(-x^2);
		fact=fact*(i*2)*(2*i+1);
	}
	printf("%d",sum);
}
