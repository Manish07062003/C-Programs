#include<stdio.h>
void max_min(int n,int a[]);
int main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("INVALID INPUT\n");
		return 0;
	}
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter %dth of array\n",i);
		scanf("%d",&a[i]);
	}
	max_min(n,a);
	int choice;
	printf("Enter the choice 1 or 2\n\n");
	printf("1 to modify ith index element\n\n");
	printf("2 to modify elements between i to j\n\n");
	printf("-1 to stop the program\n\n");
	scanf("%d",&choice);
	if(choice != 1 && choice != 2 && choice != -1)
	{
		printf("INVALID INPUT\n");
		return 0;
	}
	while(choice!=-1)
	{
		if(choice == 1)
		{
			int i;
			printf("Enter the index of the element to be modified\n");
			scanf("%d",&i);
			if(i<0 || i>=n)
			{
				printf("INVALID INPUT\n");
				return 0;
			}
			int ne;
			printf("Enter the new element\n");
			scanf("%d",&ne);
			a[i]=ne;
			max_min(n,a);
		}
		else
		{
			int i,j;
			printf("Enter the indicies from which to which to be modified\n");
			scanf("%d",&i);
			scanf("%d",&j);
			if(i<0 || i>j || j>=n)
			{
				printf("INVALID INPUT\n");
				return 0;
			}
			for (int k=i; k<=j; k++)
			{
				scanf("%d",&a[k]);
			}
			max_min(n,a);
		}
		printf("1 to modify ith index element\n\n");
                printf("2 to modify elements between i to j\n\n");
		printf("-1 to stop the program\n\n");
		scanf("%d",&choice);
	}
}
void max_min(int n,int a[])
{
	int max=a[0],min=a[0];
	for(int i=1; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d is max and %d is min\n\n",max,min);
}
