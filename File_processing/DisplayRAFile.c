#include<stdio.h>
#include<stdlib.h>
//Program to display a random access file
struct StudentRec
{
    char rollNo[9];
    char name[20];
    float marks;
};

typedef struct StudentRec Student;
int main(int argc, char **argv)
{
    if(argc != 2)
    {
	printf("Invalid arguments: File name missing!");
	exit(0);
    }

    FILE *fin = NULL, *fout = NULL;

    fin = fopen(argv[1], "rb");
    if(fin == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }

    while(!feof(fin))
    {
	Student s;
	if(fread(&s, sizeof(Student), 1, fin))
	{
	    printf("%s, %s, %f\n", s.rollNo, s.name, s.marks);
	}
    }
    fclose(fin);
}
