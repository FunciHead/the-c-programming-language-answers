/*Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c where c is some charater not listed above.*/
#include <stdio.h>

int main(int argc, char const *argv[]){
    // \c is not standard for the c language so it has no meaning and it will return an compilation error
    printf("\c");
    return 0;
}