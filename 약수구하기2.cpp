#include <stdio.h>

int main (void) {
	int div, i, j, array[10];
	i=1, j=0;
	printf ("����� ã�� ���� �����ÿ�:");
	scanf ("%d",&div);
	
	while (i<=div) {
		if (div%i==0) {
			array[j] = i;
			i++;
			j++;
		}
		else {
			i++;
		}
	}
	for (int i=0;i<10;i++) {
		printf ("%d ",array[i]);
	}
}
