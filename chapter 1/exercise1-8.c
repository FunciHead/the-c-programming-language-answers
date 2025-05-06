/*exercise 1-8. Write a program to count blanks, tabs, and newlines*/


#include <stdio.h>
int main(int argc, const char *argv[]){
    
    int c, blanks, new_lines, tabs;
    blanks = 0;
    new_lines = 0;
    tabs = 0;
    //To stop the while press ctrl+D
    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        }
        if (c == '\n'){
            ++new_lines;
        }
        if (c == '\t'){
            ++tabs;
        }
    }
    printf("Number of blanks:%d\nNumber of new lines:%d\nNumber of tabs: %d\n",blanks,new_lines,tabs);

    
    return 0;
}