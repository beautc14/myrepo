#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int num,i,j;
	int* array;
	array = (int*) malloc(1);
	int length = 1;
	i = 1;
	j = 0;
	scanf("%d",&num);
	
	while (i<=num) {
		if (num%i==0) {
			array[j] = i;
			printf("array[%d]:%d,length:%d\n",j,i,length);
			if (i<num) {
				length++;
				array = (int*) realloc(array, length);
				j++;
			}	
		}
		i++;
	}
	
	for (int k=0; k<length; k++) {
		printf ("%d ",array[k]);
	}
}
