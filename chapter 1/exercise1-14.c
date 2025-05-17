/*Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.*/

#include <stdio.h>

#define MAXIMUM 256

int main(int args, char *argv[]){

    int characters[MAXIMUM];
    int c;
    //clean the array
    for (size_t i = 0; i < MAXIMUM; i++){
        characters[i] = 0;
    }
    
    while ((c=getchar())!= EOF){
        characters[c]++;
    }

    printf("Histogram of characters:\n");
    for (int i = 0; i < MAXIMUM; i++){
        if(characters[i] > 0){
            if (i == '\n'){
                printf("\\n: ");
            }else if (i == '\t'){
                printf("\\t: ");
            }else {
                printf("%c: ",i);
            }
            for (size_t j = 0; j < characters[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    
    
    



    return 0;
}