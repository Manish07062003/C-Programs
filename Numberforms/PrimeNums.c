#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			printf("it is not a prime");
			return 0;
		}
	}
	printf("it is a prime");
}
