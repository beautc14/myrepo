#include <stdio.h>

int main (void) {
	int large, small, lcm, gcm, temp, l, s;
	lcm=gcm=temp=l=s=0; 
	printf ("ū ���� �Է��ϼ���:");
	scanf ("%d",&large);
	printf ("���� ���� �Է��ϼ���:");
	scanf ("%d",&small);
	l = large, s = small;
	
	while (1) {
		if (l%s==0) {
			gcm = s;
			lcm = (int)((large*small)/gcm);
			printf ("%d�� %d�� �ִ�����:%d, �ּҰ����:%d\n",large, small, gcm, lcm);
			break;
		}
		else {
			temp = s;
			s = (int)(l%s);
			l = temp;
		}
	}
	
}
