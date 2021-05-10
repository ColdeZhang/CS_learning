#include <stdio.h>
#include <string.h>

/* 
 * Name : <Deer>
 * Program to experiment with strings
 */
 
int StringLength(char str[]);
void PrintLength(char str[]);
void Reverse(char str[]);
int NumberOfSpaces(char str[]);

int main ()
{
    char mySentence[80];
    int len;
    
    printf("Enter a sentence: ");
    fgets(mySentence, 80, stdin);
    len = strlen(mySentence);
    mySentence[len - 1] = '\0';
    printf("The entered sentence is: %s\n", mySentence);
   
    PrintLength(mySentence);

    Reverse(mySentence);
    printf("The reversed sentence is: %s\n", mySentence);

    printf("The number of spaces is: %d\n", NumberOfSpaces(mySentence));
}

void PrintLength(char str[])
{
    printf("The string %s is %ld characters long\n", str, (long int)strlen(str));
}


int StringLength(char str[])
{
    int numChars = 0;
    
    while(str[numChars] != '\0')
    {
        numChars++;
    }
    
    return numChars;
}

void Reverse(char str[]){
    int front = 0;
    int back = strlen(str) - 1;
    char temp;
    while (front < back){
        temp = str[front];
        str[front] = str[back];
        str[back] = temp;
        front++;
        back--;
    }
}

int NumberOfSpaces(char str[]){
    int num = 0;
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == ' '){
            num++;
        }
        i++;
    }
    return num;
}