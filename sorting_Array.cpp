#include <stdio.h>
#include <math.h>

int main (void) {
	int number;
	scanf ("%d",&number);
	int max_number = 4;
	int counter = 0;
	int array[max_number];
	int max_temp = max_number;
	while (counter<max_number) {
		int max_number_pow = pow(10,max_temp);
		int max_number_div = pow(10,max_temp-1);
		array[counter] = (number%max_number_pow)/max_number_div;
		max_temp--;
		counter++;
	}
	for (int i=0;i<max_number;i++) {
		printf ("%d\n",array[i]);
	}
	return 0;
}

