#include<stdio.h>
int main()
{
	int UL,LL;
	for (int i=1; i<=26; i++)
	{
		UL=64+i;
		LL=123-i;
		printf("('%c','%c')",UL,LL);
	}
}
