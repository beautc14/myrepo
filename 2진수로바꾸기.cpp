#include <stdio.h>

int main (void) {
	int num, array[100], i, j;
	i = j = 0;
	printf ("2진법으로 변환할 숫자:");
	scanf ("%d",&num);
	
	while (num!=0) {
		j = (int)num%2;
		array[i] = j;
		i++;
		num = (int)num/2;	
	}
	
	for (int k=i-1; k>=0; k--) {
		printf ("%d ",array[k]);
	}
}
