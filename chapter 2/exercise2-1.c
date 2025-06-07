#include <stdio.h>
#include <limits.h>

/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/

int main(int argc, char *argv[]){
    
    char max_char = SCHAR_MAX;
    char min_char = SCHAR_MIN;
    short max_short = SHRT_MAX;
    short min_short = SHRT_MIN;
    int max_int = INT_MAX;
    int min_int = INT_MIN;
    long max_long = LONG_MAX;
    long min_long = LONG_MIN;
    unsigned long max_unsigned_long = ULONG_MAX;
    unsigned int max_unsigned_int = UINT_MAX;
    unsigned char max_unsigned_char = UCHAR_MAX;
    unsigned short max_unsigned_short = USHRT_MAX;


    printf("Char max: %d\nChar min: %d\nUnsigned char max: %d\n", max_char, min_char,max_unsigned_char);
    printf("Short max: %d\nShort min: %d\nUnsigned Short max: %d\n", max_short, min_short,max_unsigned_short);
    printf("Int max: %d\nIny min: %d\nUnsigned int max: %d\n", max_int, min_int,max_unsigned_int);
    printf("Long max: %ld\nLong min: %ld\nUnsigned long max: %ld\n", max_long, min_long,max_unsigned_long);

    return 0;
}