#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int freq=1;
	for(int i=1; i<n; i++)
	{
		if(a[i]==max)
		{
			freq++;
		}
		if (a[i] > max)
		{
			max=a[i];
			freq=1;
		}
	}
	printf("Maximum element is %d\n",max);
	printf("Frequency of maximum element is %d\n",freq);
}
