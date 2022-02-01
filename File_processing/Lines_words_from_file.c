//Write a C program which takes a text file as command line argument and displays the number of lines and words in the input file. Use fgets() function to read the text file line by line and use strtok() function to tokenizethe string into words.
#include<stdio.h>
#include<string.h>
#define SIZE 100
int main(int argc,char **argv)
{
	FILE *fptr;
	fptr=fopen(argv[1],"r");
	char str[SIZE];
	int linecnt=0,wordcnt=0;
	char *tokenptr;
	if(fptr==NULL)
	{
		printf("ERROR iN OPENING THE FILE");
		return 0;
	}
	//END_OF_FILE(feof) return non-zero if the file pointer reaches to the end of the file
	while(1)
	{	
		//reads line by line from the argument file
		fgets(str,SIZE,fptr);
		if(feof(fptr))
                {
                        break;
                }
		linecnt++;
		//reading token by token with delimiter space and return strting address of token
		tokenptr=strtok(str," ");
		while(tokenptr!=NULL)
        	{
			//it saves the strting address of nxt token so we pass NULL
                	tokenptr=strtok(NULL," ");
			wordcnt++;
        	}		
	}
	printf("%d %d\n",linecnt,wordcnt);
}
