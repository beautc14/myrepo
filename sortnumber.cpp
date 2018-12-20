#include <stdio.h>
#include <math.h>

int* answer_f (int array[],int maxnumber) {
	int sum;
	int power;
	while (power>0) {
		sum += array[maxnumber-power] * pow(10,power);
	}
	return array;	
}

int* findeach (int array[], int number, int maxnumber) {
	int* ptr_temp = &array[0];
	for (int i=maxnumber;i>0;i--) {
		*ptr_temp == (number%(int)pow(10,i))/(int)pow(10,i-1);
		ptr_temp++;
	}
	return &array[maxnumber];
}

int findmax (int number) {
	for (int i=0;i<12;i++) {
		if ((number/(int)pow(10,i))==0) {
			return i;
		}
	}
	printf ("something is wrong\n");
}

void sortnumber (int number) {
	int max = findmax (number);
	int array[max] = findeach(array[max], number, max);
	int i, j;
	for (i=0; i<max-1;i++) {
		for (j=i+1;j<max;j++) {
			if (array[i]<array[j] {
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			}
		}
	}
	int array[] = answer_f(array,max);
}


int main (void) {
	int input;
	scanf ("%d",&input);
	sortnumber (input);
	return 0;
}
