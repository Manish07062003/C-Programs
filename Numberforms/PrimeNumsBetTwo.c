#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int max=a;
	int min=b;
	if (max<min)
	{
		max=b;
		min=a;
	}
	for (int i=min; i<=max; i++)
	{
		int cnt=0;
		for (int j=2; j<=i-1; j++)
		{
			if (i%j==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		{
			printf("%d,",i);
		}
	}
}
