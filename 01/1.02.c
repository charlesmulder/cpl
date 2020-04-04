#include <stdio.h>

/**
 * \t \\ \b \n \"
 * Experiment to find out what happens when printf 's argument string contains \c, where c is some character not listed above.
 */
int main(void) {
    printf("hel\klo, ");
    printf("world");
    printf("\n");
    return 0;
}
