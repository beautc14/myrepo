#include <stdio.h>

int main (void) {
	int index, mini_sum, sum;
	index=sum=0, mini_sum =1;
	while (index<20) {
		printf("index:%d, mini_sum:%d, sum:%d\n",index,mini_sum,sum);
		sum += mini_sum;
		index++;
		mini_sum += index;	
	}
	printf("%d",sum);t
}
