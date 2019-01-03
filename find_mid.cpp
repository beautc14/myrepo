#include <stdio.h>

// find second bigget number function
void find_mid (int A, int B, int C) {
	int ans, temp=0;
	if (A>=B) {
		ans=A;
		temp = B;
	}
	else {
		ans=B;
		temp = A;
	}
	if (ans>=C) {
		if (temp>=C) {
			ans=temp;
		}
		else {
			ans=C;
		}
	}
	printf ("%d",ans);
}

int main (void) {
	int A, B, C;
	scanf ("%d %d %d",&A,&B,&C);
	find_mid (A,B,C);
	return 0;
}
