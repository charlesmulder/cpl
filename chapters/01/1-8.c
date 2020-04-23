#include <stdio.h>

int main(void) {

    long blank, tab, nl, c;
    blank=tab=nl=0;

    while((c = getchar()) != EOF) {
        if(c == '\n') 
            ++nl;
        if(c == ' ')
            ++blank;
        if(c == '\t')
            ++tab;
    }
    printf("\n\nRESULT:\n");
    printf("=======\n\n");
    printf("blanks: %ld\n", blank);
    printf("tabs: %ld\n", tab);
    printf("new lines: %ld\n", nl);
}

