#include<stdio.h>
int main()
{
        //Horizontal Bar Graph
	int marks;
	scanf("%d",&marks);
	int Acnt=0;
	int Bcnt=0;
	int Ccnt=0;
	int Dcnt=0;
	int Fcnt=0;
	if (marks==-1)
	{
		printf("NO MARKS ENTERED");
		return 0;
	}
	while (marks != -1)
	{
		if (marks>=0 && marks<=100)
		{
			if (marks>=80)
			{
				Acnt++;
			}
			else if (marks>=70)
			{
				Bcnt++;
			}
			else if (marks>=60)
			{
				Ccnt++;
			}
			else if (marks>=50)
			{
				Dcnt++;
			}
			else
			{
				Fcnt++;
			}
		}
		scanf("%d",&marks);
	}
	if (Acnt==0 && Bcnt==0 && Ccnt==0 && Dcnt==0 && Fcnt==0)
	{
		printf("NO MARKS ENTERED");
		return 0;
	}
	int max=Acnt;
	if (Bcnt>max)
	{
		max=Bcnt;
	}
	else if(Ccnt>max)
	{
		max=Ccnt;
	}
	else if(Dcnt>max)
	{
		max=Dcnt;
	}
	else if(Fcnt>max)
	{
		max=Fcnt;
	}
	int j=max+1;
	for (int i=1; i<=j; i++)
	{
		if (Acnt==max)
		{
			printf("* ");
			Acnt--;
		}
		else
		{
			printf("  ");
		}
		if (Bcnt==max)
		{
			printf("* ");
			Bcnt--;
		}
		else 
		{
			printf("  ");
		}
		if (Ccnt==max)
                {
                        printf("* ");
			Ccnt--;
                }
                else
                {
                        printf("  ");
                }
		if (Dcnt==max)
                {
                        printf("* ");
			Dcnt--;
                }
                else
                {
                        printf("  ");
                }
		if (Fcnt==max)
                {
                        printf("* ");
			Fcnt--;
                }
                else
                {
                        printf("  ");
                }
		max--;
		if (i==j)
		{
			printf("\n");
			printf("A B C D");
		}
		printf("\n");
	}
}
