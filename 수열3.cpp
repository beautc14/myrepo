#include <stdio.h>

int main () {
	double index =1; 
	double sum =0;
	while (index<100) {
		printf ("index:%f\n",index);
		printf ("sum:%f\n",sum);
		if ((int)index/2 == index/2) {
			printf("EVEN\n");
			sum = sum + index/(index+1);
		}
		else {
			printf("ODD\n");
			sum = sum + ((index/(index+1))*(-1));
		}
		index++;
	}
	
}
