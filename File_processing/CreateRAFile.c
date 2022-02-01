#include<stdio.h>
#include<stdlib.h>
//Program to create a Random Access file
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

    fptr = fopen(argv[1], "wb");
    if(fptr == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }

    int choice = 1;
    while(choice != -1)
    {
	Student s;
	printf("Enter the roll Number: ");
	scanf("%s", s.rollNo);
	printf("Enter the name: ");
	scanf("%s", s.name);
	printf("Enter the marks: ");
	scanf("%f", &s.marks);
	fwrite(&s, sizeof(Student), 1, fptr);
	printf("Enter 1 to add more records -1 to exit: ");
	scanf("%d", &choice);
    }
    fclose(fptr);
}
