#include <stdio.h>

int main (void) {
	int answer[2];
	int v[3][2] ={1,2,5,2,1,1};
	
	if (v[0][0] == v[1][0]) {
        answer[0]=v[2][0];
	}
    else if (v[0][0] == v[2][0]) {
        answer[0]=v[1][0];
    }
    else {
        answer[0]=v[0][0];
	}
    
	if (v[0][1] == v[1][1]) {
        answer[1] = v[2][1];
    }
    else if (v[0][1] == v[2][1]) {
        answer[1] = v[1][1];
    }
    else {
        answer[1] = v[0][1];
    }
    printf("x: %d,y: %d\n",answer[0],answer[1]);
}
