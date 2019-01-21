#include <stdio.h>

int find_range (int number) {
    int count =0;
    while (number!=0) {
        number = number/10;
        count++;
    }
    return count;
}

void in_array (int answer, int* ptr, int number) {
    for (int i=0; i<number; i++) {
        *ptr = answer%10;
        answer = answer/10;
        ptr++;
    }
}

void count_number (int num, int* ptr, int max) {
    int count =0;
    for (int i=0; i<max; i++) {
        if (*ptr==num) {
            count++;
        }
        ptr++;
    }
    printf ("%d\n",count);
}

void number_of_number() {
    int A, B, C;
    scanf ("%d",&A);
    scanf ("%d",&B);
    scanf ("%d",&C);
    int ans = A*B*C;
    int max = find_range(ans);
    int array[max];
    int* ptr = &array[0];
    in_array(ans, ptr, max);
    ptr = &array[0];
    for (int i=0; i<10; i++) {
        count_number(i, ptr, max);
    }
}

int main (void) {
    number_of_number();
    return 0;
}