#include <stdio.h>
void  main() {
    char c;
    for(;;) {
        printf( "\nPress any key, Q to quit: " );

        // Convert to character value
        scanf("%c", &c);
        if (c == 'Q')
            break;
    }
 } 
