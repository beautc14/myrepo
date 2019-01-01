#include <stdio.h>

int main (void) {
	int array [3][2] = {{'a','b'},{'c','d'},{'e','f'}};
	int* ptr = &array[0][0];
	for (int i=0;i<3;i++) {
		for (int j=0;j<2;j++) {
			printf ("%c",*ptr);
			ptr++;
		}
	}
	return 0;
}
