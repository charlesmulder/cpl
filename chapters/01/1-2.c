#include <stdio.h>

/**
 * 1-2. Experiment to find out what happens when printf's argument string contains \c, 
 * where c is some character other than \t \\ \b \n and \.
 */
int main(void) {
    printf("hel\klo, ");
    printf("world");
    printf("\n");
    return 0;
}
