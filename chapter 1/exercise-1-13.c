/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>

#define MAXWORD 10   // Maximum word length we'll count
#define IN 1         // Inside a word
#define OUT 0        // Outside a word

int main() {
    int c, i, state, len;
    int wordlen[MAXWORD];

    // Initialize histogram array
    for (i = 0; i < MAXWORD; i++)
        wordlen[i] = 0;

    state = OUT;
    len = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (len < MAXWORD)
                    wordlen[len]++;
                else
                    wordlen[MAXWORD - 1]++; // Count overflow in last bin
                len = 0;
                state = OUT;
            }
        } else {
            state = IN;
            len++;
        }
    }

    // Print histogram
    printf("Word length histogram:\n");
    for (i = 1; i < MAXWORD; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < wordlen[i]; j++)
            putchar('*');
        putchar('\n');
    }

    // Show overflow bin (words longer than MAXWORD-1)
    printf("%2d+: ", MAXWORD - 1);
    for (int j = 0; j < wordlen[MAXWORD - 1]; j++)
        putchar('*');
    putchar('\n');

    return 0;
}
