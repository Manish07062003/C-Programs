#include"max2.h"
int max4(int a, int b, int c, int d)
{
	int maxl=max2(a,b);
	int maxr=max2(c,d);
	int max=max2(maxl,maxr);
	return max;
}
