#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int maxcnt=0,maxvalue;
	for (int i=0;i<n;i++)
	{
		int cnt=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cnt++;
			}
		}
		if(cnt>maxcnt)
		{
			maxcnt=cnt;
			maxvalue=a[i];
		}
	}
	printf("mode is %d\n",maxvalue);
}
