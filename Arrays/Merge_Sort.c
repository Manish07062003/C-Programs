#include<stdio.h>
void listsort(int n,int a[],int s1,int n1,int n2); 
int main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("INVALID INPUT");
		return 0;
	}
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the %dth element\n",i);
		scanf("%d",&a[i]);
	}
	int n1=1,n2=1;
	while(n1<n)
	{
		int s1=0;
                while(s1<n&&s1+n1<n)
	        {
			if(s1==n-3)
			{
				n2=1;
			}
			else if(s1+n1==n-4)
			{
				n2=4;
			}
			else if(s1+n1==n-2)
			{
				n2=2;
			}
			listsort(n,a,s1,n1,n2);
		        s1=s1+n1+n2;
		}
		n1=n1*2;
		if(n%2==1)
		{
			if(n1==n-1)
			{
				n2=1;
			}
			else if(n1==n-3&&n>5)
			{
				n2=3;
			}
			else
			{
				n2=n1;
			}
		}
		else
		{
			if(n1==n-2)
			{
				n2=2;
			}
			else if(n1==n-4 && s1+n1==n-4)
			{
				n2=4;
			}
			else
			{
				n2=n1;
			}
		}
	}
	printf("Sorted Array\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
void listsort(int n,int a[],int s1,int n1,int n2)
{
	int i=s1,j=s1+n1,c[n],k=0;
	while(i<s1+n1 && j<s1+n1+n2)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<s1+n1)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<s1+n1+n2)
	{
		c[k]=a[j];
		j++;
		k++;
	}
	int x=s1;
	int z=0;
	while(x<s1+n1+n2)
	{
		a[x]=c[z];
		z++;
		x++;
	}
}
