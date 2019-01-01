#include <stdio.h>

int main (void) {
	int a, b;
	scanf ("%d %d",&a,&b);
	double answer = (double)a/b;
	printf ("%.9f",answer);
	return 0;
}
