#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	int conv=0;
	int conv1=0;
	int digit,digit1;
	int pow=1;
	int pow1=1;
	if (a==10)
	{
		while (n!=0)
		{
			digit=n%b;
			conv=conv+digit*pow;
			pow=pow*10;
			n=n/b;
		}
		printf("%d",conv);
	}
	else if (a!=10 && b==10)
	{
		while (n!=0)
		{
			digit=n%10;
			conv=conv+digit*pow;
			pow=pow*a;
			n=n/10;
		}
		printf("%d",conv);
	}
	else if(a!=10 && b!=10)
	{
		while (n!=0)
                {
                        digit=n%10;
                        conv=conv+digit*pow;
                        pow=pow*a;
                        n=n/10;
                }
		while (conv!=0)
		{
			digit1=conv%b;
			conv1=conv1+digit1*pow1;
			pow1=pow1*10;
			conv=conv/b;
		}
		printf("%d",conv1);
	}
}
