#include<stdio.h>
#include"max.h"
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	max(n,a);
}
