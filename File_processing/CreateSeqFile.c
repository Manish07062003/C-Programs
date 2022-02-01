#include<stdio.h>
#include<stdlib.h>
//Program to create a sequential file
int main(int argc, char **argv)
{
    if(argc != 2)
    {
	printf("Invalid arguements: File name is missing");
	exit(0);
    }
    char rollNo[9], name[20];
    float marks;

    FILE *fptr = NULL;

    fptr = fopen(argv[1], "w");
    if(fptr == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }

    int choice = 1;
    while(choice != -1)
    {
	printf("Enter the roll Number: ");
	scanf("%s", rollNo);
	printf("Enter the name: ");
	scanf("%s", name);
	printf("Enter the marks: ");
	scanf("%f", &marks);
	fprintf(fptr, "%s %s %f\n", rollNo, name, marks);
	printf("Enter 1 to add more records -1 to exit: ");
	scanf("%d", &choice);
    }	
    fclose(fptr);

}
