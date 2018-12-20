#include <stdio.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int checking (int array_sample[], int arraynumber) {
    for (int i=0;i<arraynumber-1;i++) {
        if (array_sample[i]>array_sample[i+1]) {
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

void sorting (int array_sample[],int arraynumber) {
	int i=0;
    while (array_sample[i]>array_sample[i+1]) {
        int temp = array_sample[i];
        array_sample[i] = array_sample[i+1];
        array_sample[i+1] = temp;
        if (checking(array_sample,arraynumber)==EXIT_SUCCESS) {
            for (int j=0;j<arraynumber;j++) {
                printf ("%d\n",array_sample[j]);
                break;
            }
        }
        else {
            sorting (array_sample, arraynumber);
        }  
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
    for (int j=0;j<number;j++) {
    	printf ("%d",array[j]);
	}
    return 0;
}
