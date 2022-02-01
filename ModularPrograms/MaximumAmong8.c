#include<stdio.h>
#include"max4.h"
#include"max2.h"
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	int ML=max4(a,b,c,d);
	int MR=max4(e,f,g,h);
	int max=max2(ML,MR);
	printf("%d is maximum",max);
}
