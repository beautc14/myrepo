#include <stdio.h>
#include <math.h>
// not working
void sum_for_array (int* ptr, int num_pow) {
	int sum = 0;
	for (int i=0; i<num_pow; i++) {
		sum += *ptr;
		ptr++;
	}
	printf ("%d",sum);
} 

// function that add numbers received
void add_number (int number, int power) {
	printf ("number: %d, power: %d\n", number, power);
	int array [power];
	for (int i=0; i<power; i++) {
		array[i] = (number%(int)pow(10,power-i))/(int)pow(10,power-i-1);
	}
	printf ("array:\n");
	for (int j=0; j<power; j++) {
		printf ("%d\n", array[j]);
	}
	int* ptr_temp = &array[0];
	sum_for_array (ptr_temp, power);
}

int main (void) {
	int power;
	long long input;
	scanf ("%d",&power);
	printf ("%d\n",power);
	scanf ("%lld",&input);
	printf ("%lld\n",input);
	add_number (input, power);
	return 0;
}
