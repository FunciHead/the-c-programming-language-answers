/*Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.*/

#include <stdio.h>

int main(int argc, const char *argv[]){
    int c;
    while ( (c = getchar()) != EOF)
    {
        if (c == '\t'){
            printf("\\t");
        }
        if (c == '\b')
        {
            printf("\\b");
        }
        if (c == '\\'){
            printf("\\\\");
        }

        if (c != '\t'){
            if (c != '\\')
            {
                if (c != '\b')
                {
                    putchar(c);
                }
                
            }
            
        }


        
        
    }
    
    return 0;
}