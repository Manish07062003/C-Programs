#include<stdio.h>
void toh(int n,int st,int dt,int it);
int main()
{
	int n;
	scanf("%d",&n);
	toh(n,1,3,2);
}
void toh(int n,int st,int dt,int it)
{
	if(n==1)
	{
		printf("MOVE TOP DISK FROM %d TO %d\n",st,dt);
		return;
	}
	toh(n-1,st,it,dt);
	printf("MOVE TOP DISK FROM %d TO %d\n",st,dt);
	toh(n-1,it,dt,st);
	return;
}
