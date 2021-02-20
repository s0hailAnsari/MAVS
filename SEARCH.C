#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1000
#include"main.h"
int countOccurrences(FILE *fptr, const char *word);
int se1()
{
    FILE *fptr;
    char path[100];
    char word[50];
    int wCount;
    //clrscr();
    //border(160,br_cnt,4,1);
    printf("Enter word/string/character to search in file: ");
    scanf("%s", word);
//    gets(word);
    fptr = fopen("temp1.txt", "r");
    if (fptr == NULL)
    {
	printf("Unable to open file.\n");
	printf("Please check you have read/write previleges.\n");
	exit(EXIT_FAILURE);
    }
    wCount = countOccurrences(fptr, word);
    printf("\n'%s' is found %d times in file.", word, wCount);
    getch();
    fclose(fptr);
    return 0;
}

int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos,ch;
    int index, count;
    count = 0;
    printf("\nContents of file are: ");
    while((ch = fgetc(fptr)) != EOF)
      printf("%c", ch);
	rewind(fptr);
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
	index = 0;
	// Fin1d next occurrence of word in str
	while ((pos = strstr(str + index, word)) != NULL)
	{
	    index = (pos - str) + 1;
	    count++;
	}
    }
    return count;
}