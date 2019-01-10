#include <stdio.h>

// return average
int find_avg (int* ptr, int N) {
    int avg = 0;
    for (int i=0;i<N;i++) {
        avg += *ptr;
        ptr++;
    }
    printf ("\navg: %d\n",avg/N);
    return avg/N;
}

//return count that counts the scores more than average
int count_max (int* ptr, int N, int avg) {
    int count =0;
    for (int i=0;i<N;i++) {
        if (*ptr>avg) {
            count++;
        }
        ptr++;
    }
    printf ("count:%d\n",count);
    return count;
}

int main (void) {
    int C;
    scanf ("%d",&C);
    printf ("C:%d\n",C);
    for (int i=0; i<C; i++) {
        int N;
        scanf ("%d",&N);
        printf ("N:%d\n",N);
         int score [N];
            for (int i=0;i<N;i++) {
                scanf ("%d",&score[i]);
            }
        printf ("score array: ");
            for (int j=0;j<N;j++) {
                 printf ("%d",score[j]);
                 printf (",");
            }
        int* ptr = &score[0];
        int avg = find_avg (ptr, N);
        int* temp = &score[0];
        int count = count_max (temp, N, avg);
        float ans = (float)count/N*100;
        printf ("%.3f%%\n",ans);
    }
    return 0;
}