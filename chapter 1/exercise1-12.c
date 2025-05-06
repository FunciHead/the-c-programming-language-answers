/*Exercise 1-12. Write a program that prints its input one word per line.*/

#include <stdio.h>

int main(int argc, const char *argv[]){
    int c;
    while ((c = getchar()) != EOF){
            if (c == ' ' || c == '\t'){
                putchar('\n');
                while ((c = getchar()) == ' ' || c == '\t');  
            }
            putchar(c);
        }
    return 0;
}