#include <stdio.h>

/**
 * 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 * Press Ctrl+D for EOF
 */
int main(void) {
    printf("Press Ctrl+D for EOF.\n");
    printf("%d\n", getchar() != EOF);
    return 0;
}
