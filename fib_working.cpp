#include <stdio.h>

int fib (int a, int b, int input) {
    int sum = a+b;
    input--;
    if (input==1) {
       printf ("%d",sum);
		return sum;	
	}
    return fib (b,sum,input);
}

int main (void) {
int input;
scanf ("%d",&input);
fib(0,1,input);
return 0;
}
