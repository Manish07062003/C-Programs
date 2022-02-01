//Take the list of integers 1, 2, 3, ….., n, from this list of integers every second number is removed to produce a new list. From the new list every third number is removed to produce yet another list. Every forth number is removed from this list and so the process continues. The numbers that remain after this process are called the lucky numbers. Write a C program which reads a positive non-zero integer (n) from the user and displays all the lucky numbers for that n.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("INVALID INPUT");
        return 0;
    }
    int a[n];
    for(int i=1; i<=n; i++)
    {
        a[i-1]=i;
    }
    int s=1,cnt=2;
    while(s<=n)
    {
        int i=0,k=0,z=s;
        while(i<n)
        {
            if(i!=z)
            {
                a[k]=a[i];
                k++;
                i++;
            }
            else
            {
                z=z+cnt;
                i++;
            }
        }
        cnt++;
        s++;
        n=k;
    }
    for(int p=0; p<n; p++)
    {
        printf("%d ",a[p]);
    }
}
