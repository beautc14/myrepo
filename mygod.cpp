#include <stdio.h>
#include <string.h>

int main (void) {
	char* string = "Hello";
	for (int i=0; i<6; i++) {
		if (string[i]==string[i+1]) {
			printf ("correct!,%d\n",i);
		}
	}
}
