#include<stdio.h>
#include<math.h>
float calculatecharges(float n);
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a<1||b<1||c<1||a>24||b>24||c>24)
	{
		printf("INVALID INPUT");
		return 0;
	}
	float s=0;
	float s1=0;
	printf("CAR\tHOURS\tCHARGE\n");
	printf("1\t%.2f\t",a);
	s=s+a;
	float charge=calculatecharges(a);
	s1=s1+charge;
	printf("%.2f\n",charge);
	printf("1\t%.2f\t",b);
        s=s+b;
        charge=calculatecharges(b);
        s1=s1+charge;
        printf("%.2f\n",charge);
	printf("1\t%.2f\t",c);
        s=s+c;
        charge=calculatecharges(c);
        s1=s1+charge;
        printf("%.2f\n",charge);
	printf("TOTAL\t%.2f\t%.2f\n",s,s1);
}
float calculatecharges(float n)
{
	float sum=2;
	if (n<=3)
	{
		return sum;
	}
	else if (n<24)
	{
		int a=ceil(n-3);
		for(int i=1; i<=a; i++)
		{
			sum=sum+0.5;
		}
		return sum;
	}
	else
	{
		sum=sum+8;
		return sum;
	}
}
