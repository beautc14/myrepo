#include <stdio.h>

int fib_helper (int a, int b, int fib_input) {
	int sum = a+b;
	fib_input--;
	if (fib_input-1==0){
		return sum;
	}
	return fib_helper(b,sum,fib_input);
}

void fib (int help_input) {
	int answer = fib_helper (0,1,help_input);
	printf ("%d",answer);
}

int main (void) {
	int input;
	scanf ("%d",&input);
	fib(input);
	return 0;
}
