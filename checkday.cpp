#include <stdio.h>

int wholeday (int mon, int days) {
int wholedays = days;
for (int i=1; i<mon; i++) {
	if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) {
		printf ("i=%d\n",i);
		printf ("first\n");
		wholedays += 31;
	}
	else if (i==4 || i==6 || i==9 || i==11) {
		printf ("i=%d\n",i);
		printf ("second\n");
		wholedays += 30;
	}
	else if (i == 2) {
		printf ("i=%d\n",i);
		printf ("third\n");
		wholedays += 28;
	}
	else {printf ("wrong input! i=%d \n",i);
	}
}
	printf ("%d\n",wholedays);
	return wholedays;
}

void whatday (int month, int day) {
	if ((wholeday(month,day)%7)==1) {
		printf ("MON");}
	else if ((wholeday(month,day)%7)==2) {
		printf ("TUE");}
	else if ((wholeday(month,day)%7)==3) {
		printf ("WED");}
	else if ((wholeday(month,day)%7)==4) {
		printf ("THU");}
	else if ((wholeday(month,day)%7)==5) {
		printf ("FRI");}
	else if ((wholeday(month,day)%7)==6) {
		printf ("SAT");}
	else {
		printf ("SUN");}
	}

int main(void) {
	int x, y;
	scanf ("%d %d",&x,&y);
	whatday(x,y);
	return 0;
}
