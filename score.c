#include <stdio.h>
#include <string.h>

int numberO (char* ptr, size_t length) {
    int score = 1;
    while (*ptr=='O') {
        ptr++;
        if (*ptr=='O') {
            int temp = score;
            temp++;
            score += temp;
        }
    }
    return score;
}

void print_score () {
    char array[80];
    int score = 0;

    fgets (array, 80, stdin);
    size_t len = strlen(array);
    char* ptr = &array[0];
    while (*ptr!='\0') {
        if (*ptr=='O') {
            score += numberO (ptr, len);
        }
        else {
            ptr++;
        }
    }
    printf ("%d\n",score);
}

int main (void) {
    int number;
    scanf ("%d",&number);
    for (int i=0; i<number; i++) {
        print_score ();
    }
    return 0;
}