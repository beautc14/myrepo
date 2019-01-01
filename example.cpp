#include <stdio.h>
#include <math.h>

int find_max (int number) {
	int counter=0;
	int divider=pow(10,counter);
	int answer = number/divider;
	while (answer>0) {
	counter++;
	divider=pow(10,counter);
	answer= number/divider;
	}
	printf ("NOW counter : %d\n",counter);
	return counter;
}

int main (void) {
	int input;
	scanf ("%d",&input);
	int max = find_max(input);
	return 0;
}
