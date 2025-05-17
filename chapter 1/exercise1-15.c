/*Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.*/


#include <stdio.h>

void fahr_to_celsius(int lower, int upper, int step);

int main(){
    fahr_to_celsius(0, 300, 20);
   return 0;  
}

void fahr_to_celsius(int lower, int upper, int step){
    int fahr, celsius;
    fahr = lower;
    while (fahr <= upper) {
       celsius = 5 * (fahr-32) / 9;
       printf("%d\t%d\n", fahr, celsius);
       fahr = fahr + step;
   }
}
