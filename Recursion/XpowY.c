#include<stdio.h>
int XpowY(int x,int y);
int main()
{
	int x,y;
	printf("enter x = ");
	scanf("%d",&x);
	printf("enter y = ");
	scanf("%d",&y);
	int pow=XpowY(x,y);
	printf("%d power %d is %d\n",x,y,pow);
}
int XpowY(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	int a=x*XpowY(x,y-1);
        return a;	
}
