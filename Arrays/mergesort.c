#include<stdlib.h>
#include<stdio.h>
void merge(int *a, int l, int m, int r);
void iterativeMergeSort(int *a, int l, int r);
int main()
{
	int n;
   	scanf("%d",&n);
   	int a[n];
   	for(int i=0; i<n; i++)
   	{
           	scanf("%d",&a[i]);
   	}
   	iterativeMergeSort(a,0,n-1);
   	printf("Sorted array \n");
   	for (int i=0; i < n; i++)
   	{
	   	printf("%d ", a[i]);
   	}
   	printf("\n");
}
void merge(int *a, int l, int m, int r) 
{
   	int i, j, k;
   	int n1 = m-l+1;
   	int n2 = r-m;
   	int x[n1], y[n2];
   	for (i = 0; i < n1; i++)
	{
      		x[i] = a[l + i];
	}
   	for (j = 0; j < n2; j++)
	{
      		y[j] = a[m + 1+ j];
	}
   		i = 0, j = 0, k = l;
   	while (i < n1 && j < n2) 
	{
      		if (x[i] <= y[j]) 
		{
         		a[k] = x[i];
        	 	i++;
		}
		else 
		{
        	 	a[k] = y[j];
         		j++;
      		}
      		k++;
   	}
   	while (i < n1) 
	{
      		a[k] = x[i];
      		i++;
      		k++;
   	}
   	while (j < n2) 
	{
      		a[k] = y[j];
      		j++;
      		k++;
   	}
}
void iterativeMergeSort(int *a, int l, int r) 
{
	if (l < r)
	{
		int mid = l+(r-l)/2;
                iterativeMergeSort(a, l, mid);
           	iterativeMergeSort(a, mid+1, r);
           	merge(a,l,mid,r);
	}
}
