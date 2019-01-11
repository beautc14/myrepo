#include <stdio.h>

void findCycle (int N, int firstN, int count) {
    int add_N = N/10 + N%10;
    int new_N = (N%10)*10 + add_N%10;
    count++;
    if (new_N == firstN) {
        printf ("%d",count);
    }
    else {
        findCycle (new_N, firstN, count);
    }
}

int main (void) {
    int firstN;
    scanf ("%d",&firstN);
    findCycle (firstN, firstN, 0);
    return 0;
}