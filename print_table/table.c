#include<stdio.h>
int main()
{
	int M;
	scanf("%d",&M);
	if (M <= 0)
	{
		printf("INVALID INPUT");
		return 0;
	}
	for (int i=0; i<=M; i++)
	{
		if(i==0)
		{
			printf("N\t10*N\t100*n\t1000*N\n");
		}
		else
		{
		printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
		}
	}
}
