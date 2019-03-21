#include <stdio.h>

int main (void) {
	int N, sum, input;
	printf("수를 입력하시오:");
	scanf("%d",&N);
	sum=0, input=2;
	while (input<=N) {
		if (input%divider==0) {
			if (input==divider) {
				sum+=input;				
				printf("%d는 소수입니다.\n",input); 
			}
			else {				
				printf("%d는 %d로 나뉘기 때문에 소수가 아닙니다.\n",input, divider);
			}
			input++;
			divider=2;
		}
		else {
			divider++;
		}
	}
	printf("sum:%d\n",sum);
}
