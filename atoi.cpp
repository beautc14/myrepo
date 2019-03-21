#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	char str[11];
	char for_atoi[2];
	for_atoi[1] = '\0';
	int ans, dot;
	ans = dot = 0;
	scanf ("%s",str);
	
	for (int i=0; i<11; i++) {
		if (str[i]=='.') {
			dot = i;
			for (int j=i+1; j<11; j++) {
				str[j-1] = str[j];
			}					
		}
	}
	
	int length = sizeof(str)/sizeof(str[0]) -1;
	
	for (int i=0; i<length; i++) {
		for_atoi[0] = str[i];
		ans += (int)pow(2,dot-1-i)*atoi(for_atoi);
	}
	printf ("%d", ans);
}
