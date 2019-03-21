#include <stdio.h>

int main () {
	int index, sum;
	index=sum=1;
	
	while (index<=100) {
		if (index%2==0) {
			sum *= index;
		}
		else {
			sum *= (index*-1);
		}
		index++;
		printf("now index:%d now sum: %d\n",index, sum);
	}
	printf ("%d",sum);
}
