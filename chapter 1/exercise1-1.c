/*
Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving
out parts of the program, to see what error messages you get.
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    
    // the line bellow has three errors
    // 1 - there is no print function
    // 2 - the string is not closed by it's missing a "
    // 3 - missing the ";"
    //print("hello world)

    printf("Hello, world");    
    return 0;
}