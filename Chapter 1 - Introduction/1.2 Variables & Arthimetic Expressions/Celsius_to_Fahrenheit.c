#include <stdio.h>

/* Print Celsius-Fahrenheit table with headers
* for cels = 0, 20, ..., 300; 
*/

int main () {
    float fahr, cels;
    float upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    cels = lower;
    printf("Celsius\t\tFahrenheit\n");
    while (cels <= upper) {
        fahr = ((9.0/5.0) * cels) + 32.0;
        printf("%3.1f\t\t%4.1f\n", cels, fahr);
        cels = cels + step;
    }

    return 0 ;
}