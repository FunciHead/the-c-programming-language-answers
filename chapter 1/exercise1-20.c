/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXLINE 1000


void clear(char line[], int size);
void copy(char to[], char from[]);
int mygetline(char line[],int maxline);


int main(int args, char *argv[]){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE]; /* longest line saved here */
    
    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0){
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        if (max > 0) {
            //this -1 is for the null character 
            printf("%s", longest);
            max = 0;
            clear(longest, MAXLINE);
        }
    }
    return 0;
}


int mygetline(char line[],int maxline){
    int c, i;
    for (i=0; i < maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
        if (c == '\n') {
            line[i] = c;
            ++i;
        }
        line[i] = '\0';
    return i;
}


void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    ++i;
}

void clear(char line[], int size){
    for (int i = 0; i < size; i++){
        line[i] = 0;
    }
    
}