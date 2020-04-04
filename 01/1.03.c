#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%s %s\n", "Fahrenheit (F)", "Celsius ()");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%9.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
