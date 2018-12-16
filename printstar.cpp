#include <stdio.h>

void printstar (int number) {
	for (int i=0; i<number; i++) {
		for (int j=number-i; j>0; j--) {
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
