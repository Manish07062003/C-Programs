#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int status=fact(n);
	printf("%d",status);
}
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	int f=n*fact(n-1);
	return f;
}
