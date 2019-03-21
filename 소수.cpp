#include <stdio.h>

long long prime_num (int N) {
	long long answer=0;
	for (int i=2;i<N;i++) {
		if (i<4) {
			answer += i;
		}
		else {
			int j=2;
			while (1) {
				if (i%j==0) {
					break;
				}
				else {
					if (j==i-1) {
						answer += i;
						break;
					}
				}
			}
		}
	}
	
}

int main (void) {
	int N;
	printf ("수를 입력하세요:"); 
	scanf ("%d",&N);
	prime_num(N); 
}
