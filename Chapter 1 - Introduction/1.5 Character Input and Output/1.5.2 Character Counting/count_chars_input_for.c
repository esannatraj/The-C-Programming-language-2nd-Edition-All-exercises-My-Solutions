#include <stdio.h>

/* Count chars in input */

int main () {
    long nc;

    for (nc = 0; getchar() != EOF; nc++) { //CTRL Z for EOF, but this needs to be on a new line. BUT, this then counts ENTER as a character. 
        ; 
    }

    printf("Number of Characters: %.0ld\n", nc);

    return 0;
}