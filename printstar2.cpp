#include <stdio.h>

void printstar (int number) {
	for (int i=0; i<number; i++) {
		for (int j=0; j<i; j++) {
			printf (" ");
		}
		for (int k=number-i; k>0; k--) {
			printf ("*");
		}
		printf ("\n");
	}
}

int main (void) {
	int input;
	scanf ("%d",&input);
	printstar (input);
	return 0;
}
