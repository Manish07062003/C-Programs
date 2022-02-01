#include<stdio.h>
void magic_square(int n,int a[n][n]);
int validate(int n,int [n][n]);
int main()
{
	int n;
	printf("Enter the odd size of magic square\n");
	scanf("%d",&n);
        if(n<0 || n>0 && n%2==0)
	{
		printf("INVALID INPUT");
		return 0;
	}
	int a[n][n];
	 for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        a[i][j]=0;
                }
        }
	magic_square(n,a);
	for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
			printf("%d ",a[i][j]);
                }
                printf("\n");
        }
	int z=validate(n,a);
	if(z==1)
	{
		printf("Magic square is valid\n");
		return 0;
	}
	printf("Magic square is invalid\n");
}
void magic_square(int n,int a[n][n])
{
	int i=0,j=n/2,b=2;
        a[i][j]=1;
        for(int k=0; k<n*n; k++)
        {
                if(i-1<0 && j+1<n)
                {
                        j=j+1;
                        i=n-1;
                        a[i][j]=b;
                        b++;
                }
                else if(i-1>=0 && j+1==n)
                {
                        i=i-1;
                        j=0;
                        a[i][j]=b;
                        b++;
                }
                else if(i-1>=0 && j+1<n)
                {
                        if(a[i-1][j+1]!=0)
                        {
                                i=i+1;
                                a[i][j]=b;
                                b++;
                        }
                        else
                        {
                                i=i-1;
                                j=j+1;
                                a[i][j]=b;
                                b++;
                        }
                }
                else
                {
                        i=i+1;
                        a[i][j]=b;
                        b++;
                }
        }
}
int validate(int n,int a[n][n])
{
	int magic_constant=n*(n*n+1)/2;
	int i=0,j=0,s[n*2+2],k=0,sum=0;
	while(i<n)
	{
		if(j<n)
		{
			sum=sum+a[i][j];
			j++;
		}
		else
		{
			s[k]=sum;
			sum=0;
			k++;
			j=0;
			i++;
		}
	}
	i=0,j=0;
	while(j<n)
        {
                if(i<n)
                {
                        sum=sum+a[i][j];
                        i++;
                }
                else
                {
                        s[k]=sum;
                        sum=0;
                        k++;
                        i=0;
                        j++;
                }
        }
	i=0,j=0;
	while(j<n)
	{
		sum=sum+a[i][j];
	        i++;
	        j++;
	}
	s[k]=sum;
	sum=0;
	k++;
	i=0,j=n-1;
	while(i<n)
	{
		sum=sum+a[i][j];
		i++;
		j--;
	}
	s[k]=sum;
	int cnt=0;
	for(int l=0; l<=k; l++)
	{
		if(s[l]==magic_constant)
		{
			cnt++;
		}
	}
	if(cnt==n*2+2)
	{
		return 1;
	}
}
