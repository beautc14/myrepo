#include <stdio.h>
#include <string.h>

int main (void) {
    char array[100];
    int len, count= 0;
    char* ptr = &array[0];

    gets (array);
    len = strlen (array);
    while (count<=len) {
        int i=0;
        while (i<10 && count<=len) {
            printf ("%c",*ptr);
            i++;
            ptr++;
            count++;
        }
        printf ("\n");
    }   
    return 0;
}