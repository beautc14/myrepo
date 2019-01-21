#include <stdio.h>

void f (int N) {
	int counter = 1;
	while(1) {
		N -= counter;
		if (N<0) {
			break;
		}
		counter++;
	}
	printf ("%d",counter+1);
}

int main (void) {
	int N;
	scanf ("%d",&N);
	if (N==1) {
		printf ("1");
		return 0;
	}
	N = (N-2)/6;
	f(N);	
	return 0;
}
