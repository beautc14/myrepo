#include <stdio.h>

int main (void) {
	int first, second, sum, mini_sum;
	first = second = 1, sum = 2, mini_sum = 0;
	for (int index=2; index<20; index++) {
		mini_sum = first + second;
		sum+= mini_sum;
		first = second;
		second = mini_sum;
		printf("index:%d first:%d second:%d\n",index, first, second);		
	}
	printf("sum:%d\n",sum);
} 
