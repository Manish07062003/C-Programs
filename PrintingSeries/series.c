#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<1||b<1)
	{
		printf("invalid input");
		return 0;
	}
	int f=1;
	int s=1;
	int t;
	int max;
	max = a;
	if (b>=max)
	{
		max = b;
	}
	for (int i=1; i<=max; i++)
	{
		t = f + s;
		f = s;
		s = t; 
		if (a==f)
		{
			if (b==s||b==s-f)
			{
				printf("YES");
				break;
			}
			else
			{
				printf("NO");
				break;
			}
		}
		if (a==i)
		{
			printf("NO");
			break;
		}

	}
}
