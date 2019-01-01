#include <stdio.h>

void calculation (int num_1, int num_2) {
	printf ("%d\n",num_1+num_2);
	printf ("%d\n",num_1-num_2);
	printf ("%d\n",num_1*num_2);
	printf ("%d\n",num_1/num_2);
	printf ("%d\n",num_1%num_2);
}

int main (void) {
	int a, b;
	scanf ("%d %d",&a,&b);
	calculation (a,b);
	return 0;
}
