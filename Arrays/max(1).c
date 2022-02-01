#include<stdio.h>
void max(int n,int a[])
{
	int max=a[0];
	for (int i=1; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is %d",max);
}
