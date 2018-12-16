#include <stdio.h>

int main (void) {
	char input[100000];
	fgets (input,100000,stdin);
	for (int i=0; i<100000; i++) {
		printf ("%c",input);
	}
		return 0;
}
