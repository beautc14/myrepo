#include <stdio.h>

struct index {
	int x;
	int y;
};
typedef struct index index_t;

index_t array_maker (int number) {
scanf ("%d",&number);
	index_t array[number][5000];
	for (int i=0;i<number;i++) {
		for (int j=0;j<number;j++) {
			array[i][j].x = i;
			array[i][j].y = j; 
		}
	}
	for (int k=0;k<number;k++) {
		for (int l=0;l<number;l++) {
			printf ("%d ",array[k][l].x);
			printf ("%d\n",array[k][l].y);
}
}
return array[number][5000];
}

void sugar_deliver (int number, index_t array[][5000]) {
	int answer = 0;
	for (int i=0;i<number;i++) {
		for (int j=0; j<number; j++) {
			if (number-3*array[i][j].x-5*array[i][j].y==0) {
				if (answer>array[i][j].x + array[i][j].y) {
					answer = array[i][j].x + array[i][j].y;
				}
			}
		}
	}
	printf ("%d",answer);
}

int main (void) {
	int N;
	scanf ("%d",&N);
	index_t array[N][5000] = array_maker[N][5000];
	sugar_deliver (N,array);
	return 0;
}
