#include <stdio.h>
#include <stdlib.h>

int find_div (int num, int base) {
	int temp = 1;
	while (temp<num) {
		temp = temp * base;
	}
	temp = temp/base;
	
	return temp;
}


int main (void) {
	int num, base, div;
	char array[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	scanf ("%d %d",&num, &base);
	div = 0;
	
	div = find_div(num, base);
	
	do {
		printf ("%d",num/div);
		num = num%div;
		div = div/base;
	}
	while(div>=1);
}
