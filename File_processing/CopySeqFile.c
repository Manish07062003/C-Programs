#include<stdio.h>
#include<stdlib.h>
//Program to copy a sequential file
int main(int argc, char **argv)
{
    if(argc != 3)
    {
	printf("Invalid arguements: File name is missing");
	exit(0);
    }
    char rollNo[9], name[20];
    float marks;

    FILE *fin = NULL, *fout = NULL;

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");
    if(fin == NULL || fout == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }

    while(!feof(fin))
    {
	fscanf(fin, "%s%s%f\n", rollNo, name, &marks);
	fprintf(fout, "%s %s %f\n", rollNo, name, marks);
    }
    fclose(fin);
    fclose(fout);
}
