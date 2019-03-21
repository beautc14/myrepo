#include <stdio.h>

int main () {
	int i, sw, sum;
	i = sw = 1, sum =0;
	while (i<=100) {
		int temp = i * sw;
		sum += temp;
		i++;
		sw *= -1;
	}
	printf ("%d",sum);
}
