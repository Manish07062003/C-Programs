//Write a modularized C program to check if a number (n > 0) if palindrome or not.
//A number is palindrome if the number is equal to the reverse of that number.
//For example the number 1771 is palindrome where as 1245 is not.
#include<stdio.h>
int revnum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if (n < 1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    int RN=revnum(n);
    if (n == RN)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}
int revnum(int n)
{
    int digit;
    int temp=n;
    int conv=0;
    while (n != 0)
    {
        digit=n%10;
        conv=conv*10+digit;
        n=n/10;
    }
    return conv;
}
