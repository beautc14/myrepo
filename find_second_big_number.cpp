#include <stdio.h>

void find_second (int num_1, int num_2, int num_3) {
	int array[3] = {num_1, num_2, num_3};
	int i=0;
	while((array[0]>array[1]) || (array[1]>array[2])) {
		int temp;
		if (array[i]>array[i+1]) {
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}	
		if (i!=2) {
			i++;
		}
		else {
			i=0;
		}
	}
	printf ("%d",array[1]);
}

int main (void) {
	int a,b,c;
	scanf ("%d %d %d",&a,&b,&c);
	find_second(a,b,c);
	return 0;
}
