//Write a  modularized C program to display the following of an array of n integer elements:
//- Display the array elements in reverse order by reversing the array
//- Display the distinct elements of the array. Array may contain duplicate elements
 // Each element should be printed only once discarding the duplicates
#include<stdio.h>
void Reverse(int n,int a[]);
void Distinct(int n, int a[]);
int main()
{
    int n;
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("INVALID INPUT");
        return 0;
    }
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Reverse(n,a);
    Distinct(n,a);
}
void Reverse(int n, int a[])
{
    int b[n];
    int i=0,j=n-1;
    while(i<n)
    {
        b[i]=a[j];
        j--;
        i++;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    printf("# ");
}
void Distinct(int n, int a[])
{
    int c[n],k=1;
    c[0]=a[0];
    for(int i=1; i<n; i++)
    {
        int cnt=0;
        for(int j=k-1; j>=0; j--)
        {
            if(a[i]==c[j])
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }
}
