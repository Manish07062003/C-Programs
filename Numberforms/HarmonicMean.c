#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double A;
	double H;
	double temp=0;
	for(int i=1; i<=n; i++)
	{
		scanf("%lf",&A);
		temp=temp+1/A;
	}
	H=n/temp;
	printf("%lf",H);
	
}
