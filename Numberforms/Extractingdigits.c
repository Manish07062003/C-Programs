#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int temp=n;
	int temp1=n;
	int sum=0;
	int d=0;
	while (n>0)
	{
		d=d+1;
		n=n/10;
	}
	int x=1;
	for (int i=1; i<=d-1; i++)
	{
		x=x*10;
	}
	int a;
	int p=1;
	while (temp>0)
	{
		a=temp/x;
		for (int i=1; i<=d; i++)
		{
			p=p*a;
		}
		sum=sum+p;
		p=p*0+1;
		temp = temp%x;
		x=x/10;
	}
	if (sum==temp1)
	{
		printf("Armstrong\n");
	}
	else
	{
		printf("Not a Armstrong\n");
	}
	int y=1;
        for (int i=1; i<=d-1; i++)
        {
                y=y*10;
        }
        int b;
	int sum1=0;
	int q=1;
	int cnt=0;
        while (temp1>0)
        {
                b=temp1/y;
                for (int i=1; i<=d; i++)
                {
			q=q*b;
                        if (i==1)
			{
				printf("%d",b);
			}
			else
			{
				printf("*%d",b);
			}
                }
		cnt++;
		if(cnt<=d-1)
		{
			printf("+");
		}
                sum1=sum1+q;
		q=q*0+1;
                temp1 = temp1%y;
                y=y/10;
        }
	printf("=%d\n",sum1);

}
