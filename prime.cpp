#include <stdio.h>

int main (void) {
	int N, sum, input;
	printf("���� �Է��Ͻÿ�:");
	scanf("%d",&N);
	sum=0, input=2;
	while (input<=N) {
		if (input%divider==0) {
			if (input==divider) {
				sum+=input;				
				printf("%d�� �Ҽ��Դϴ�.\n",input); 
			}
			else {				
				printf("%d�� %d�� ������ ������ �Ҽ��� �ƴմϴ�.\n",input, divider);
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
