/*exercise 1-4. Write a program to print corresponding Celsius to fahrenheit*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 240;
    step = 10;

    celsius = lower;
    printf("cel   fahr\n----------\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius+32.0;
        printf("%3.0f %6.1f\n",celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}

/*
y = 10
x = (5/9) * (y-32)

*/