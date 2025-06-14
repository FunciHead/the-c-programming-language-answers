/*
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/
#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);

void copy(char to[], char from[]);
void clear(char line[], int size);

int main(){
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
            if( len > 80) {
                //this -1 is for the null character 
                printf("line length: %d\n", len-1);
                printf("%s", longest);
                max = 0;
                clear(longest, MAXLINE);
           }else {
                printf("Line smallerr than 80 characters\n");
                max = 0;
                clear(longest, MAXLINE);
           }
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