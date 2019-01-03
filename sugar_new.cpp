#include <stdio.h>
// There are 3kg and 5kg sugar pack. This algorithm find fewest sugar packs that can put sugar Nkg.

void sugar_f (int input) {
	int ans = 0;
	if ((input==1)||(input==2)||(input==4)) {
		printf ("-1");
	}
	else if (input>5 && ((input%5==1)||(input%5==2)||(input%5==4))) {
		int divider = input/5;
		int remainder = input%5;
		while (divider!=0) {
			divider--;
			remainder = remainder+5;
			if (remainder%3==0) {
				ans = divider + remainder/3;
				printf ("%d",ans);
				break;
			}
			else if (divider==0) {
				printf ("-1");
				break;
			}
		}
	}
	else if (input%5==3) {
		ans = input/5+1;
		printf ("%d",ans);
	}
	else {
		printf ("%d",input/5);
	}
}

int main (void) {
	int N;
	scanf ("%d",&N);
	sugar_f (N);
	return 0;
}
