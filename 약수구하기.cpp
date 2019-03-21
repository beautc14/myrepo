#include <stdio.h>

int main (void) {
	int large, small, lcm, gcm, temp, l, s;
	lcm=gcm=temp=l=s=0; 
	printf ("큰 수를 입력하세요:");
	scanf ("%d",&large);
	printf ("작은 수를 입력하세요:");
	scanf ("%d",&small);
	l = large, s = small;
	
	while (1) {
		if (l%s==0) {
			gcm = s;
			lcm = (int)((large*small)/gcm);
			printf ("%d와 %d의 최대공약수:%d, 최소공배수:%d\n",large, small, gcm, lcm);
			break;
		}
		else {
			temp = s;
			s = (int)(l%s);
			l = temp;
		}
	}
	
}
