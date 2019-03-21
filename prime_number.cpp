#include <stdio.h>

int main (void) {
	for (int N=2; N<=10000; N++) {
		int i=N-1;
		int index = 0;
		while (i>1) {
			if (N%i==0) {
				index++;
			}
			i--;
		}
		if (index==0) {
			printf ("%d\n",N);
		}
	}
	return 0;
}
