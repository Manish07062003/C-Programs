#include<stdio.h>
#include<stdlib.h>
int strlen1(char *s);
int strlen2(char s[]);
char *strRev(char *s);
int main()
{
	char c[20];
	printf("Enter A String\n");
	scanf("%s",c);
	int length=strlen2(c);
	printf("Length of the string is %d\n",length);
	char *rev=strRev(c);
	printf("%s\n",rev);
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
int strlen2(char s[])
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

