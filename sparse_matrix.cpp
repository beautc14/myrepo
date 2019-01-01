#include <stdio.h>

void sparse_matrix (int row, int column, int* ptr_1, int* ptr_2) {
	int count = 0;
	for (int i=0;i<row;i++) {
		for (int j=0;j<column;j++) {
			if (*ptr_1!=0) {
				count++;
			}
			ptr_1++;
		}
	}
	int sparse[count+1][3];
	sparse[0][0] = row;
	sparse[0][1] = column;
	sparse[0][2] = count;
	int temp = 1;
	for (int k=0;k<row;k++) {
		for (int l=0;l<column;l++) {
			if (*ptr_2!=0) {
				sparse[temp][0] = k;
				sparse[temp][1] = l;
				sparse[temp][2] = *ptr_2;
				temp++;
			}
			ptr_2++;
		}
	}
	printf ("sparse matrix\n");
	for (int m=0;m<=count;m++) {
		for (int n=0;n<3;n++) {
			printf ("%d\t",sparse[m][n]);
		}
		printf ("\n");
	}
}

int main (void) {
	int m,n;
	printf ("array row: ");
	scanf ("%d",&m);
	printf ("array column: ");
	scanf ("%d",&n);
	int matrix[m][n];
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf ("Please enter value array[%d][%d]: ",i,j);
			scanf ("%d",&matrix[i][j]);
		}
	}
	for (int k=0;k<m;k++) {
		for (int l=0;l<n;l++) {
			printf ("%d\t",matrix[k][l]);
		}
		printf ("\n");
	}	
	int* matrix_ptr = &matrix[0][0];
	int* matrix_ptr_temp =&matrix[0][0];
	sparse_matrix (m,n,matrix_ptr,matrix_ptr_temp);	
	return 0;
}
