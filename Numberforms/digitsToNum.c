#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int digit;
	int p=1;
	int conv=0;
	for (int i=1; i<n; i++)
	{
		p=p*10;
	}
	for (int i=1; i<=n; i++)
	{
		scanf("%d",&digit);
		digit=digit*p;
		conv=conv+digit;
		p=p/10;
	}
	printf("%d",conv);
}
