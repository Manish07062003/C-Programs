/*Write a simple application to conduct a computer based quiz. The quiz consists of questions with answers true or false only. Suppose the questions are present in a text file Questions.txt, in the following format:

First line of the file consists of the number of questions present in the file and the rest of the file consists of the question followed by answer in separate lines. Your program should display questions one by one, and prompt the user to enter his answer, at the end display the score of the user. And also display the questions the user has wrongly answered along with the correct answer. (You can assume that each question is of length at most 80 characters). Use command line arguments to provide the text file to the program.

A sample Questions.txt file:
3
There are one thousand years in a CENTURY.
False
DOZEN is equivalent to 20.
False
The past tense of FIND is FOUND.
True*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define QSIZE 100
#define ASIZE 10
struct questions
{
	char ques[QSIZE];
	char ans[ASIZE];
	char userans[ASIZE];
};
typedef struct questions question;
void tolower(char s[]);
int main()
{
	int n,score=0;
	FILE *fptr=NULL;
	fptr=fopen("questions.txt","r");
	if(fptr==NULL)
	{
		printf("ERROR IN OPENING THE FILE");
		return 0;
	}
	if(feof(fptr))
	{
		printf("INCOMPLETE FILE");
		return 0;
	}
	fscanf(fptr,"%d",&n);
	fscanf(fptr,"\n");
	if(n<1)
	{
		printf("INVALID NO. OF QUESTIONS");
		return 0;
	}
	question a[n];
	int wrng[n];
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(feof(fptr))
        {
            printf("INCOMPLETE FILE");
			return 0;
		}
		fgets(a[i].ques,QSIZE,fptr);
		if(feof(fptr))
        {
            printf("INCOMPLETE FILE");
			return 0;
		}
		fgets(a[i].ans,ASIZE,fptr);
		printf("%s",a[i].ques);
		int length=strlen(a[i].ans);
		a[i].ans[length-1]='\0';
        scanf("%s",a[i].userans);
		tolower(a[i].ans);
		tolower(a[i].userans);
		int comp=strcmp(a[i].ans,a[i].userans);
		if(comp==0)
		{
			score++;
		}
		else
		{
			wrng[k++]=i;
		}
	}	
	printf("YOUR SCORE IS %d\n",score);
	if(score!=n)
	{
		printf("WRONG QUESTIONS AND ANSWERS ARE\n"); 
		for(int i=0;i<k;i++)
		{
			printf("%s",a[wrng[i]].ques);
			printf("%s\n",a[wrng[i]].ans);

		}
	}
	fclose(fptr);

}
void tolower(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>'A'&&s[i]<'Z')
		{
			s[i]+=32;
			i++;
		}
		else
		{ 
			i++;
		}
	}
}
