#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    if(argc != 2)
    {
	printf("Invalid arguements: File name is missing");
	exit(0);
    }

    FILE *fin = NULL;

    fin = fopen(argv[1], "rb");
    if(fin == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }
    while(!feof(fin))
    {
	int n;
	if(fread(&n, sizeof(int), 1, fin))
	{
	    printf("%d\n", n);
	}
    }	

    fclose(fin);
}

void sortList(int a[], int n)
{
    for(int i = 0; i < n -1; i++)
    {
	for(int j = i+1; j < n; j++)
	{
	    if(a[j] < a[i])
	    {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }
}
