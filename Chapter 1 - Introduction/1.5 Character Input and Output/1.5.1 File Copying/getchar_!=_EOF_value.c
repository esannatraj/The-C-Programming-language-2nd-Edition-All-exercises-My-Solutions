#include <stdio.h>

int main () {
    int value;

    value = getchar()!=EOF;
    printf("Value of getchar()!=EOF: %d", value);
    
    return 0;
}