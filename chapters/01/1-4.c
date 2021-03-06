#include <stdio.h>

/**
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */
int main(void) {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%s %s\n", "Celsius", "Fahrenheit");

    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%9.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
