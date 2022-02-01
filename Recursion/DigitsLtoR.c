#include<stdio.h>
int PrintLR(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int status=PrintLR(n);
}
int PrintLR(int n)
{
	if(n==0)
	{
		return 0;
	}
	int DigitLR=PrintLR(n/10);
	printf("%d",n%10);
	return 0;
}
