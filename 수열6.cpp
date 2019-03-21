#include <stdio.h>

int main (void) {
	int index, sum, mini_sum;
	index=sum=0, mini_sum=1;
	while (index<20) {
		index++;
		mini_sum*=index;
		sum+=mini_sum;
		printf("index:%d mini_sum:%d sum:%d\n",index,mini_sum,sum);
	}
	
}
