#include <stdio.h>

int main (void) {
	int i, index, sum;
	i=index=1, sum=0;
	while (index<=20) {
	if (index%2==0) {
		sum += i;
	}
	else {
		sum += i*(-1);
	}
	i+=index;
	index++;
}
printf ("%d",sum); 
}
