#include<stdio.h>
int main()
{
	int marks;
	scanf("%d",&marks);
	int max;
	max=marks;
	while (marks != -1)
	{
	if (marks>=0 && marks<=100)
	{
	 if (marks>=max)
	{
		max=marks;
	}
	}
	scanf("%d",&marks);
	}
	if (max==-1)
	{
		printf("No marks entered");
	}
	else if(max>=0 && max<=100)
	{
	printf("%d is max",max);
	}
}
