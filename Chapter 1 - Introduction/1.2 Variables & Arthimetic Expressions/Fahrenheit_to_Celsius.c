#include <stdio.h>

/* Print Fahrenheit-Celsius table with headers
* for fahr = 0, 20, ..., 300; 
*/

int main () {
    float fahr, cels;
    float upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        cels = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.1f\t\t%6.1f\n", fahr, cels);
        fahr = fahr + step;
    }

    return 0 ;
}