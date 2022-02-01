#include<stdio.h>
#include<stdlib.h>

void sortList(int a[], int n);
int main(int argc, char **argv)
{
    if(argc != 3)
    {
	printf("Invalid arguements: File name is missing");
	exit(0);
    }

    FILE *fin = NULL, *fout = NULL;

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "wb");
    if(fin == NULL || fout == NULL)
    {
	printf("Unable to create output file!");
	exit(0);
    }
    int n = 0;
    if(!feof(fin))
    {
	fscanf(fin, "%d", &n);
    }	

    int list[n];
    int i = 0;
    while(!feof(fin))
    {
	fscanf(fin, "%d", &list[i]);
	i++;
    }
    sortList(list, n);
    //fprintf(fout, "%d ", n); 
    fwrite(&n, sizeof(int), 1, fout);
    for(int i = 0; i < n; i++)
    {
    	fwrite(&list[i], sizeof(int), 1, fout);
    }
    fclose(fin);
    fclose(fout);
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
