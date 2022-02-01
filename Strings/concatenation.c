#include<stdio.h>
#include<stdlib.h>
int strlen1(char *s);
char *cat(char *s1,char *s2);
void cat1(char *s1,char *s2);
void cat2(char *s1,char *s2,char *s3);
int main()
{
	char s1[20];
	char s2[20];
	char s3[20];
	scanf("%s%s",s1,s2);
	cat2(s1,s2,s3);
	printf("concatenation of string1 and string2 is %s\n",s3);
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
char *cat(char *s1,char *s2)
{
	int len1=strlen1(s1);
	int len2=strlen1(s2);
	char *s3=malloc((len1+len2+1)* sizeof(char));
	int i=0;
	while(i<len1)
	{
		s3[i]=s1[i];
		i++;
	}
	int j=0;
	while(j<len2)
	{
		s3[i]=s2[j];
		j++;
		i++;
	}
	s3[i]='\0';
	return s3;
}
void cat1(char *s1,char *s2)
{
	int len1=strlen1(s1);
        int len2=strlen1(s2);
	int i=len1,j=0;
	while(j<len2)
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	
}
void cat2(char *s1,char *s2,char *s3)
{
	int i=0;
	while(s1[i] != '\0')
	{
		s3[i]=s1[i];
		i++;
	}
	int j=0;
	while(s2[j] != '\0')
	{
		s3[i]=s2[j];
		j++;
		i++;
	}
	s3[i]='\0';
}
