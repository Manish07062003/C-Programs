#include<stdio.h>
int main()
{
	int n;
	printf("Enter a positive integer=");
	scanf("%d", &n);
	if (n<=0)
	{
		printf("Invalid number please enter a positive integer");
		return 0;
	}
	for (int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d\n", i);
		}
	}
}	

