#include <stdio.h>

int main (void) {
	int count, A[9];
	count=0;
	for (int i=2;i<=10;i++) {
		A[i-2] = i;
	}
	for (int j=0;j<9;j++) {
		if (A[j]!=0) {
			count++;
			int k = 1;
			while(j+(j+2)*k<10) {
				A[j+(j+2)*k]=0;
				printf("A[%d]=%d\n",j+(j+2)*k,A[j+(j+2)*k]);
				k++;
			} 
		}
	}
	printf("%d",count);
}
