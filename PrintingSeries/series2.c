#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n<1)
	{
		printf("INVALID INPUT");
		return 0;
	}
	int f=0;
	int s=1;
	int t=1;
	int fo;
	for (int i=2; i<=n; i++)
	{
		fo=f+s+t;
		f=s;
		s=t;
		t=fo;
	}
	printf("%d",f);
}
