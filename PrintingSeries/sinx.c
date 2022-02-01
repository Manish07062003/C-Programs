#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<1)
	{
		printf("INVALID INPUT");
		return 0;
	}
	double x;
	scanf("%lf",&x);
	int fact=6;
	double sum=x;
	double num=-x*x*x;
	for (int i=2; i<=n; i++)
	{
		sum=sum+num/fact;
		fact=fact*(2*i)*(2*i-1);
		num=num*-x*x;
	}
	printf("%.6lf",sum);
}
