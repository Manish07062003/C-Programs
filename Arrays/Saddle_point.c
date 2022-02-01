//An m X n matrix is said to have a saddle point if there is an element a[i][j] of the array such that a[i][j] is the smallest value in ith row and largest value in jth column. Write a modularized C program that displays the location of the saddle point. If the matrix has more than one saddle point display the first location of the saddle point starting from row 0 and column 0 (elements are visited from left to right and row by row). Remember array index starts from 0.
#include<stdio.h>
int saddlepoint(int m, int n,int a[m][n], int i,int j);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m<=0 || n<=0)
    {
        printf("-2");
        return 0;
    }
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int l=0; l<m; l++)
    {
        for(int k=0; k<n; k++)
        {
            int sdlp=saddlepoint(m,n,a,l,k);
            if(sdlp!=0)
            {
                printf("%d %d",l,k);
                return 0;
            }
        }
    }
    printf("-1");
}
int saddlepoint(int m, int n,int a[m][n],int i,int j)
{
    int max=a[i][j];
    int min=a[i][j];
    int x=0,y=0;
    while(y<n)
    {
        if(a[i][y] < min)
        {
            min=a[i][y];
            y++;
        }
        else
        {
            y++;
        }
    }
    while(x<m)
    {
        if(a[x][j]>max)
        {
            max=a[x][j];
            x++;
        }
        else
        {
            x++;
        }
    }
    if(min==a[i][j] && max==a[i][j])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

