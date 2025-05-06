/*Exercise 1-9. Write a program to copy its Input to its output, replacing each string of one or more blanks by a single blank*/

#include <stdio.h>

int main(int argc, const char *argv[]){
    int c;
    int last_seen;
    while ((c=getchar()) != EOF){
        if (c != ' '){
            putchar(c);
        }
        if (c == ' '){
            if (c != last_seen){
                putchar(c);
            }
        }
        last_seen = c;
    }
    
    
    return 0;
}