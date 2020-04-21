#include <stdio.h>

int main(void) {
    printf("Press a key.\n");
    printf("getchar() != EOF : %d\n", getchar() != EOF);
    return 0;
}
