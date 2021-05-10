#include <stdio.h>

/* 
 * Name : <Deer>
 * Program to experiment with character arrays
 */

#define MaxWord 20
#define MaxWordsNum 10
 
int main ()
{
    char c;
    char str[MaxWord+1];
    int wordNum[MaxWordsNum];
    for (int i = 0; i < MaxWordsNum; i++) wordNum[i] = 0;

    int loca = 0;
    int len = 0;

    double AverageWords (int [], int);
  
    puts ("Enter text. Include a dot ('.') to end a sentence to exit:");
    do 
    {
        c=getchar();
        if(c != ' ' && c != '.')
        {
            /* This is a character of a word */
            str[len] = c;
            len++;
        }
        else
        {
            if (len > 1){
                /* The word is done */
                wordNum[loca] = len;
                str[len] = 0;
                printf("%s\n", str);
                len = 0;
                loca++;
            }
        }

    } while (c != '.');

    printf("Average words is : %3.2f \n", AverageWords(wordNum, MaxWordsNum));
  
}

double AverageWords (int wordNum[], int maxWordsNum){
    int sum = 0;
    for (int i = 0; i < maxWordsNum; i++){
        sum += wordNum[i];
    }
    return sum / maxWordsNum;
}