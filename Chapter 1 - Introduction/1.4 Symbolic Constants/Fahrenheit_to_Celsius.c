#include <stdio.h>

/* Print Fahrenheit-Celsius table with headers
* for fahr = 0, 20, ..., 300;
* use a for loop
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

int main () {
    printf("Fahrenheit\tCelsius\n");
    for (float fahr = LOWER; fahr <= UPPER; fahr+=STEP) {
        printf("%3.1f\t\t%4.1f\n", fahr, (5.0/9.0) * (fahr-32.0)); 
    }
    return 0;
}