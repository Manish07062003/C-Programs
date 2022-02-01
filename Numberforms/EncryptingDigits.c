#include<stdio.h>
int main()
{
	//input four digited positive integer
        int n;
	scanf("%d",&n);
	if(n<0000 || n>9999)
	{
		printf("Invalid input");
		return 0;
	}
	int pow=1000;
	int conv=0;
	int digit;
	for (int i=1; i<=4; i++)
	{
		digit=n/pow;
		digit=digit+7;
		digit=digit%10;
		conv=conv+digit*pow;
		n=n%pow;
		pow=pow/10;
	}
	printf("%d\n",conv);
	int a,b,c,d;
	int conv1;
	a=conv/1000;
	a=a*10;
	conv=conv%1000;
	b=conv/100;
	conv=conv%100;
	c=conv/10;
	c=c*1000;
	conv=conv%10;
	d=conv*100;
	conv1=a+b+c+d;
	printf("%04d",conv1);
}
