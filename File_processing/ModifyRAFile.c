#include<stdio.h>
#include<stdlib.h>
//Program to mopdify a random access file
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

    FILE *fptr = NULL;

    fptr = fopen(argv[1], "rb+");
    if(fptr == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }
    fseek(fptr, sizeof(Student) * 2, SEEK_SET);
    Student s = {"01mcmc01", "Neeraj", 88};
    fwrite(&s, sizeof(Student), 1, fptr);
    fclose(fptr);
}
