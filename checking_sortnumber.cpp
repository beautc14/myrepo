#include <stdio.h>
#include <math.h>

int main (void) {
	printf ("%d\n",pow(1,10));
	int array[4];
	int* ptr_temp = &array[0];
	for (int i=4;i>0;i--) {
		printf ("power(10,%d) = %d\n",i,pow(10,i));
		*ptr_temp == (1234%((int)pow(10,i)))/(int)pow(10,i-1);
		printf ("array %d: %d\n",i,array[i]);
		ptr_temp++;
	}
	for (int j=0;j<4;j++) {
		printf ("%d\n",array[j]);
	}
	return 0;
}
