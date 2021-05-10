#include <stdio.h>
#include <string.h>

/* 
 * Name : <Deer>
 * Program to experiment with files
 */

void Reverse(char str[]);

int main(int argc, char *argv[])
{
    FILE *inFile;
    FILE *outFile;

    char line[120];

    if (argc < 3)
    {
        printf("Insufficient arguments\n");
        return 1;
    }

    printf("Copy from file: %s\n", argv[1]);
    printf("Copy to file: %s\n", argv[2]);

    inFile = fopen(argv[1], "r");
    if (inFile == NULL){
        printf("Unable to open file %s\n", argv[1]);
        return 1;
    }

    /* While we are not at the end of the file */
    while(!feof(inFile))
    {
        int i = 0;

        /* Read a line of text from the file */
        fgets(line, sizeof(line), inFile);
        
        /* Remove the newline at the end of the line */
        if(strlen(line) > 0)
            line[strlen(line) - 1] = '\0';
        
        /*Will copy lines to outFile*/
        fprintf(outFile, "%s\n", line);
        i++;
    }

    fclose(inFile);
}

void Reverse(char str[])
{
    int front = 0;
    int back = strlen(str) - 1;
    char temp;
    while (front < back)
    {
        temp = str[front];
        str[front] = str[back];
        str[back] = temp;
        front++;
        back--;
    }
}