#include <stdio.h>
#include <math.h>

// number의 최대 자릿수를 구하는 함수 
int find_max (int number) {
	int counter=0;
	int divider=pow(10,counter);
	int answer = number/divider;
	while (answer>0) {
	counter++;
	divider=pow(10,counter);
	answer= number/divider;
	}
	return counter;
}

// input의 각 자리수를 배열에 넣는 함수 
void sorting_array (int* ptr, int input, int max_number) {
	int max_temp = max_number;
	while (max_temp>0) {
		int max_number_pow = pow(10,max_temp);
		int max_number_div = pow(10,max_temp-1);
		*ptr = (input%max_number_pow)/max_number_div;
		max_temp--;
		ptr++;
	}
}

// input의 각 자리수를 내림차순으로 배열하여 출력하는 함수. 
void sort_number(int number) {
	int max = find_max (number);
	int array_for_sorting[max];
	int* ptr_for_array = &array_for_sorting[0];
	sorting_array(ptr_for_array, number, max);
	for (int i=0; i<max-1; i++) {
		for (int j=i+1; j<max; j++) {
			if (array_for_sorting[i]<array_for_sorting[j]) {
				int temp = array_for_sorting[j];
				array_for_sorting[j] = array_for_sorting[i];
				array_for_sorting[i] = temp;
			}
		}
	}
	for (int k=0; k<max; k++) {
		printf ("%d",array_for_sorting[k]);
	}
}

int main (void) {
	int input;
	scanf ("%d",&input);
	sort_number(input);
	return 0;
}
