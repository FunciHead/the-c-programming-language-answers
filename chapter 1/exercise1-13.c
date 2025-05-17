/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>


#define MAXIMUM 256

int main(){
    int words[MAXIMUM];
    int c;
    int index = 1;
    int current_size = 0;
    //cleaning the array
    for (int i = 0 ;i <= MAXIMUM;i++){
        words[i] = 0;
    }



    while ((c = getchar()) != EOF){
        if (c == '\n'){
            words[current_size]++;
            current_size = 0;
        }else{
            current_size++;
        }
    }


    printf("Word length histogram:\n");


    while (1>0){
        if(words[index] == 0){
            break;
        }else{
            printf("%d: ",index);
            for (size_t i = 0; i < words[index]; i++){
                printf("*");
            }
            printf("\n");
            
        }
        index++;
    }
        

    return 0;
}
