#include<stdio.h>
void revseq(int n);
int main()
{
	int n;
	revseq(n);
}
void revseq(int n)
{
	if(n==-1)
	{
		return;
	}
	scanf("%d",&n);
	revseq(n);
	if(n!=-1)
	{
		printf("%d\n",n);
	}
	return;
}
