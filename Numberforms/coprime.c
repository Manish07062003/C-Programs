#include<stdio.h>
int main()
{
    int n1,n2;
    int cnt=0;
    scanf("%d%d",&n1,&n2);
    if (n1 < 2 || n2 < 2)
    {
        printf("-1");
        return 0;
    }
    for (int i=2; i<=n2; i++)
    {
	    if (n1%i==0 && n2%i==0)
	    {
		    cnt++;
	    }
    }
    if (cnt>0)
    {
	    printf("not coprime");
    }
    else
    {
	    printf("coprime");
    }
    
}
