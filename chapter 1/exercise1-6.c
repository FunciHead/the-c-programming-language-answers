/*exercise 1-6. verify that the expression getchar() != EOF is 0 or 1*/

#include <stdio.h>

int main(int argc,char const *argv[]) {
    int c;
    //To stop the while press ctrl+D
    while ((c = getchar()) !=EOF){
        printf("%d\n", c != EOF);
    }
    printf("%d\n", c != EOF);
    return 0;
}