#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<0 || n>100)
	{
		printf("Invalid");
		return 0;
	}
	if (n>=80 && n<=100)
	{
		printf("A");
	}
	else if (n>=70 && n<=79)
	{
		printf("B");
	}
	else if(n>=50 && n<=69)
	{
		printf("C");
	}
	else if (n>=40 && n<=49)
	{
		printf("D");
	}
	else if(n>=0 && n<=39)
	{
		printf("F");
	}
}
