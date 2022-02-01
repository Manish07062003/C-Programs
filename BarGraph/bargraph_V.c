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
	printf("A: ");
	for (int i=1; i<=Acnt; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("B: ");
	for (int j=1; j<=Bcnt; j++)
	{
		printf("*");
	}
	printf("\n");
	printf("C: ");
	for (int k=1; k<=Ccnt; k++)
	{
		printf("*");
	}
	printf("\n");
	printf("D: ");
	for (int l=1; l<=Dcnt; l++)
	{
		printf("*");
	}
	printf("\n");
	printf("F: ");
	for (int h=1; h<=Fcnt; h++)
	{
		printf("*");
	}
	printf("\n");
}
