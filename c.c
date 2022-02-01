#include <stdio.h>
int main()
{
    int n = 1000;
    int primeNums[n];
    int isPrime, k = 0, a, isSquareFree;
    int i = 2,j;
    while (i < n)
    {
        isPrime = 0, j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
            j++;
        }
        if (isPrime == 0)
        {
            primeNums[k] = i * i;
            k++;
        }
        a = 0;
        isSquareFree = 0;
        while (a < k)
        {
            if (i % primeNums[a] == 0)
            {
                isSquareFree = 1;
            }
            a++;
        }
        if (isSquareFree == 0)
        {
            if (i == 2)
            {
                printf("%d ", 1);
            }
            printf("%d ", i);
        }
        i++;
    }
}