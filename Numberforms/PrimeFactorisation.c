#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=2;
	int temp=n;
	while (n>1)
	{
		if(n%i==0)
		{
			if(n==temp)
			{
				printf("%d=%d",n,i);
			}
			else
                        {
                                printf("X%d",i);
                        }
                        n=n/i;
		}
		else
		{
			i++;
		}
	}
}
