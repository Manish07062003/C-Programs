#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i=1; i<=n; i++)
    {
	    for (int j=1; j<=i; j++)
	    {
            printf("%d",n-j+1);
	    }
	    for (int j=1; j<=2*n-2*i-1; j++)
	    {
		    printf("%d",n-i+1);
	    }
	    for (int k=1; k<=i; k++)
	    {
		    if(i!=n)
		    {
			    printf("%d",n-i+k);
		    }
		    else if(k==n)
		    {
			    break;
		    }
		    else
		    {
			    printf("%d",n-i+1+k);
		    }
	    }
	    printf("\n");
    }
    int a=n-1;
    for (int i=1; i<=a; i++)
    {
	    for (int j=1; j<=a-i+1; j++)
	    {
		    printf("%d",n-j+1);
	    }
	    for (int j=1; j<=2*i-1; j++)
	    {
		    printf("%d",i+1);
	    }
	    for (int j=1; j<=a-i+1; j++)
	    {
		    printf("%d",i+j);
	    }
	    printf("\n");
    }
    return 0;
}

