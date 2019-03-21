#include <stdio.h>

int fib (int n) {
	if (n==1) {
		return 1;
	}
	else if (n==2) {
		return 2;
	}
	else {
		return fib(n-1)+fib(n-2);
	}
}

int main (void) {
	int num;
	scanf ("%d",&num);
	int answer = fib (num);
	printf ("%d\n",answer);
	printf ("wanna again?:");
	char yesorno[4];
	fgets (yesorno, 4, stdin);
	if (yesorno=="yes") {
		int number;
		scanf ("%d",&number);
		fib (number);
	}
	else if (yesorno=="no") {
		return 0;
	}
	else {
		printf ("wrong input!\n");
	}
	return 0;
}
