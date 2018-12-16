#include <stdio.h>

void sum (int number) {
	int sum=0;
	for (int i=1; i<=number; i++) {
		sum = i + sum;
	}
	printf ("%d",sum);
}

int main (void) {
	int input;
	scanf ("%d",&input);
	sum (input);
	return 0;
}
