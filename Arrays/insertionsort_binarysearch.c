//Game Of Guessing
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50
void insertion_sort(int n,int *a);
int binary_search(int n,int *a,int key);
int main()
{
    srand(time(NULL));
    int a[SIZE],key;
    scanf("%d",&key);
    for(int i=0; i<SIZE; i++)
    {
        a[i]=rand()%100;
    }
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    insertion_sort(SIZE,a);
    int result=binary_search(SIZE,a,key);
    if(result==1)
    {
        printf("USER WIN");
        return 0;
    }
    printf("COMPUTER WIN");
    
}
void insertion_sort(int n,int *a)
{
    int j=1,i=1,temp;
    while(j<n)
    {
        i=1;
        while(j-i>=0)
        {
            if(a[j]<a[j-i])
            {
                temp=a[j];
                a[j]=a[j-i];
                a[j-i]=temp;
                j--;
            }
            else
            {
                i++;
            }
        }
        j++;
    }
}
int binary_search(int n,int *a,int key)
{
    int f=0,l=n-1,mid;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(key>a[mid])
        {
            f=mid+1;
        }
        else if(key==a[mid])
        {
            return 1;
        }
        else 
        {
            l=mid-1;
        }
    }
    return 0;
}
