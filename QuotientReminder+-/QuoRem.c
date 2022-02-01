#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two integer number=");
	scanf("%d%d",&x,&y);
	if (y==0)
	{
		printf("Invlaid Input,Denominator cannot be zero");
		return 0;
	}
	int Qsign,Rsign;
	Qsign=1;
	Rsign=1;
	if(x<0)
	{
		Rsign=-1;
	}
	if ((x<0 && y>=0) || (x>=0 && y<0))
	{
		Qsign=-1;
	}
	if (x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
	int Q=0;
	while (x>=y)
	{
		x=x-y;
		Q=Q+1;
	}
	int R=x;
	if (Qsign == -1)
	{
		Q=-Q;
	}
	if (Rsign == -1)
	{
		R=-R;
	}
	printf("Quotient=%d",Q);
	printf("Remainder=%d",R);
}

