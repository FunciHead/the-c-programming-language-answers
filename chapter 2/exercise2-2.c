/*
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    s[i] = c;

Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
*/

#include <stdio.h>


int main(int argc, char *argv[]){
    int lim=100000;
    int s[lim];
    int i, c;
    for(i=0; (c=getchar()) != '\n'; ++i){
        if(i < lim-1) {
            s[i] = c;
        }
    }
    for(int j = 0; j < i; j++){
        printf("%c",s[j]);
    }
    printf("\n");
    return 0;
}

int get_char(){
    int c;
    c = getchar();
    if (c == '\n') {
        return '\n';
    }else if (c == EOF){
        return '\n';
    }
    return c;
}