# include <stdio.h>
#define MAXLINE 1000

/*
1	    tabstop
12	    tabstop
123	    tabstop
1234	tabstop
12345	tabstop
123456	tabstop
1234567	tabstop
12345678	    tabstop
 */
void main() {

    int c;

    while( (c=getchar()) != EOF && c != '\n') {
        if(c == '\t') {
            printf("###");
        } else {
            putchar(c);
        }
        //printf("%c", c);
    }
}
