#include <stdio.h>

int main (void) {
    char string[10];
    gets (string);
    char* ptr = &string[0];
    while(*ptr != '\0') {
        printf ("%c",*ptr);
    }
    return 0;
}