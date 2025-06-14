/*Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.*/

#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void reverse(char line[], int maxline);
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
            //this -1 is for the null character 
            reverse(longest, len);
            printf("reversed string: ");
            printf("%s\n", longest);
            max = 0;
            clear(longest, MAXLINE);
        }
    }
    return 0;
}

void reverse(char line[], int maxline){
    char copy;
    int j = maxline-1;
    for(int i = 0; i < maxline/2; i++){
        copy = line[i];
        line[i] = line[j];
        line[j] = copy;
        j--;
    }
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