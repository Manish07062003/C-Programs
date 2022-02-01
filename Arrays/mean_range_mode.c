#include<stdio.h>
float mean(int n,int a[] );
int range(int n, int a[]);
int mode(int n, int a[]);
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
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    float Mean=mean(n,a);
    int Range=range(n,a);
    int Mode=mode(n,a);
    printf("%.2f %d %d",Mean,Range,Mode);
}
float mean(int n,int a[])
{
    float sum=0;
    for (int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    float mean=sum/n;
    return mean;
}
int range(int n,int a[])
{
    int min=a[0],max=a[0];
    for(int i=1; i<n; i++)
    {
        if (a[i] >= max)
        {
            max=a[i];
        }
        else if(a[i] < min)
        {
            min=a[i];
        }
    }
    int range=max-min;
    return range;
}
int mode(int n,int a[])
{
    int maxcnt=0,maxvalue;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        for (int j=0; j<n; j++)
        {
            if(a[i] == a[j])
            {
                cnt++;
            }
        }
        if (cnt>maxcnt)
        {
            maxcnt=cnt;
            maxvalue=a[i];
        }
    }
        return maxvalue;
}
