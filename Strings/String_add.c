#include<stdio.h>
#include<stdlib.h>
#define SIZE 200
int length(char *s);
char *stradd(char *s1,char *s2);
int main()
{
    char s1[SIZE];
    char s2[SIZE];
    scanf("%s %s",s1,s2);
    char *s=stradd(s1,s2);
    printf("%s",s);
    free(s);
}
int length(char *s)
{
    int len=0,i=0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
char *stradd(char *s1,char *s2)
{
    int len1=length(s1);
    int len2=length(s2);
    int max=len1;
    if(len2 > max)
    {
        max=len2;
    }
    char *s=malloc((max+2)*sizeof(char));
    int x=s1[0]-'0';
    int y=s2[0]-'0';
    int x1=s1[1]-'0';
    int y1=s2[1]-'0';
    if(len1==len2 && x+y >= 10 || x+y==9 && x1+y1>=10)
    {
        max++;
        s[0]='1';
        
    }
    int a,b,rem=0;
    for(int i=1; i<=max; i++)
    {
        a=s1[len1-i]-'0';
        b=s2[len2-i]-'0';
        if(len2-i<0 && len1-i>=0)
        {
            s[max-i]=(a+rem)%10+'0';
            rem=(a+rem)/10;
        }
        else if(len1-i<0 && len2-i>=0)
        {
            s[max-i]=(b+rem)%10+'0';
            rem=(b+rem)/10;
        }
        else if(len1-i>=0 && len2-i>=0)
        {
            s[max-i]=(a+b+rem)%10+'0';
            rem=(a+b+rem)/10;
        }

    }
    s[max]='\0';
    return s;
}
