#include <stdio.h>

int main (void) {
	char sample[] = "SONCHAEWON";
	printf ("8.3:%8.3s\n",sample);
	printf ("8.1:%8.1s\n",sample);
	printf ("3.2:%3.2s\n",sample);
	printf ("-10.2:%-10.2s\n",sample);
	printf ("-10.10:%-10.10s\n",sample);
	return 0;
}
