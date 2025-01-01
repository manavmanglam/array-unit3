//diagonal sum of 3 by 3 matrix
#include<stdio.h>
int main(){
	int matrix[3][3], i, sum_primary = 0, sum_secondary = 0;
	printf("enter elements of the matrix:\n");
	for (i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		sum_primary += matrix[i][i];
	}
	for (i = 0; i < 3; i++) {
		sum_secondary += matrix[i][2 - i];
	}
	printf("\nsum of primary diagonal: %d\n", sum_primary);
	printf("sum of secondary diagonal: %d\n", sum_secondary);
	return 0;
}
