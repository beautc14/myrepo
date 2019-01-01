#include <stdio.h>

struct index {
	int x;
	int y;
};
typedef struct index index_t;

int main (void) {
int number;
scanf ("%d",&number);
	index_t array[number][number];
	for (int i=0;i<number;i++) {
		for (int j=0;j<number;j++) {
			array[i][j].x = i;
			array[i][j].y = j; 
		}
	}
	for (int l=0;l<number;l++) {
		for (int k=0;k<number;k++) {
			printf ("array[%d][%d]: x=%d y=%d\n",l,k,array[l][k].x,array[l][k].y);
		}
	}
}
