#include<stdio.h>
#include<stdlib.h>
int strlen1(char *s);
char *strRev(char *s);
int main()
{
	char ch[20];
	scanf("%s",ch);
	char *strrev=strRev(ch);
	printf("%s",strrev);
}
int strlen1(char *s)
{
        int len=0, i=0;
        while(s[i]!='\0')
        {
                len++;
                i++;
        }
        return len;
}
char *strRev(char *s)
{
        int length=strlen1(s);
        char *ch=malloc((length+1)*sizeof(char));
        int i=0;
        int j=length-1;
        while(j>=0)
        {
                ch[i]=s[j];
                j--;
                i++;
        }
        ch[i]='\0';
        return ch;
}

