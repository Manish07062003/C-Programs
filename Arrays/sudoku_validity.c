#include<stdio.h>
#include<stdlib.h>
#define SIZE 9
int subgrid_check(int n,int a[n][n],int *freq);
int Row_check(int n,int a[n][n],int *freq);
int Column_check(int n,int a[n][n],int *freq);
int freq_cnt(int *freq);
int main()
{
	FILE *fp=NULL;
	fp=fopen("sudoku.txt","r");
	if(fp==NULL)
	{
		printf("ERROR IN OPENING THE FILE\n");
		return 0;
	}
	int a[SIZE][SIZE];
	int freq[10]={0};
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			fscanf(fp,"%d",&a[i][j]);
		}
	}
       int Scnt=subgrid_check(SIZE,a,freq);
       int Rcnt=Row_check(SIZE,a,freq);
       int Ccnt=Column_check(SIZE,a,freq);
       if(Scnt==0 && Rcnt==0 && Ccnt==0)
       {
	       printf("Sudoku is valid\n");
	       return 0;
       }
       printf("Sudoku is invalid\n");
}
int subgrid_check(int n,int a[n][n],int *freq)
{	
	int r=0,c=0,i,j,fnt=0;
	for(int s=0; s<n; s++)
	{
		for(i=r; i<r+3; i++)
		{
			for(j=c; j<c+3; j++)
			{
				if(a[i][j]>=1 && a[i][j]<=9)
				{
					++freq[a[i][j]];
				}
			}	
		}
		if(s==i-1)
		{
			r=i;
			c=0;
		}
		else
		{
			c=j;
		}
		fnt+=freq_cnt(freq);
	}
	return fnt;
}
int Row_check(int n,int a[n][n],int *freq)
{
	int fcnt=0;
	for(int r=0; r<n; r++)
	{
		for(int c=0; c<n; c++)
		{
			++freq[a[r][c]];			
		}
		fcnt+=freq_cnt(freq);
	}
        return fcnt;
}
int Column_check(int n,int a[n][n],int *freq)
{
	int fcnt=0;
        for(int r=0; r<n; r++)
        {
                for(int c=0; c<n; c++)
                {
                        ++freq[a[c][r]];
                }
		fcnt+=freq_cnt(freq);
        }
        return fcnt;
}
int freq_cnt(int *freq)
{
	int cnt=0;
	for(int i=1; i<=9; i++)
        {
        	if(freq[i]!=1)
                {
                	cnt++;
                }
                freq[i]=0;
	}
	return cnt;
}
