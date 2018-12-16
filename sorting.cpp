#include <stdio.h>

int main (void) {
	int count;
	scanf ("%d",&count);
	int array [count];
	for (int i=0;i<count;i++) {
		scanf ("%d",&array[i]);
	}
	printf ("array:"); 
	for (int i=0;i<count;i++) {
		printf ("%d",array[i]);
		if (i!=count-1) {
			printf (",");
		}
	}
	printf ("\n");
	
	for (int i=0; i<count; i++) {
		for (int j=i+1; j<count; j++) {
			if (array[i]>array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int i=0;i<count;i++) {
		printf ("%d\n",array[i]);
	}
	return 0;
}
