#include <stdio.h>

void sorting (int array_sample[],int array_number) {
    for (int i=0;i<array_number;i++) {
        for (int j=i+1;j<array_number;j++) {
            if (array_sample[i]>array_sample[j]) {
                int temp = array_sample[j];
                array_sample[j] = array_sample[i];
                array_sample[i] = temp;
            }
        }
    }
}

void printing (int array_sample[],int array_number) {
    for (int i=0;i<array_number;i++) {
        printf ("%d\n",array_sample[i]);
    }
}


int main (void) {
    int number;
    scanf ("%d",&number);
    int array[number];
    for (int i=0;i<number;i++) {
        scanf ("%d",&array[i]);
    }
    sorting (array,number);
    printing (array,number);
        return 0;
}


