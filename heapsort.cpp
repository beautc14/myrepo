#include <stdio.h>
#define EXIT_SUCCESS 0

void printing_array (int array_sample[],int arraynumber) {
	for (int i=0; i<arraynumber; i++) {
		printf ("%d",array_sample[i]);
		if (i!=arraynumber-1) {
			printf (",");
		}
	}
	printf ("\n");
}

int checking (int array_sample[],int arraynumber) {
	for (int i=0; i<arraynumber-1; i++) {
		if (array_sample[i]>array_sample[i+1]) {
			return 1;
		}
		else {
			return EXIT_SUCCESS;
		}
	}
}

void sorting (int array_sample[], int index, int arraynumber) {
		while (array_sample[index]>array_sample[index+1]) {
			int temp = array_sample[index+1];
			array_sample[index+1] = array_sample[index];
			array_sample[index] = temp;
			printf ("array after sorting(now index:%d):",index);
			printing_array (array_sample,arraynumber);
			if (index<arraynumber-1) {
				index++;}
			else {
				break;
			}	
		}
	printf ("array after sorting whole(now index:%d):",index);
	printing_array (array_sample,arraynumber);	
}

int main (void) {
	int number;
	scanf ("%d",&number);
	int array[number];
	for (int i=0;i<number;i++) {
		scanf ("%d",&array[i]);
	}
	printf ("array:");
	printing_array (array,number);
	while (1) {
		sorting (array,0,number);
		if (checking(array,number)==EXIT_SUCCESS) {
			break;
		}
	}
	printf ("success array:\n");
	printing_array (array,number);
	return EXIT_SUCCESS;	

}
