#include <stdio.h>

/* Print Fahrenheit-Celsius table with headers
* for fahr = 300, 280, ..., 0; 
* use a for loop
*/

int main () {
    float upper, lower, step;
    upper = 300;
    lower = 0;
    step = 20;

    printf("Fahrenheit\tCelsius\n");
    for (float fahr = 300.0; fahr >= 0; fahr-=20) {
        printf("%3.1f\t\t%4.1f\n", fahr, (5.0/9.0) * (fahr-32.0)); 
    }
    return 0;
}