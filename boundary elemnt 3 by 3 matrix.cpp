//sum of boundary element by 3 by 3 matrix
#include<stdio.h>
int main() {
	int matrix[3][3], i, j, sum = 0;
	printf("enter element of the matrix: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; i++){
			for (j = 0; j < 3; j++){
				if (i == 0 || i == 2 || j == 0 || j == 2){
					sum += matrix[i][j];
				}
			}
		}
		printf("\nsum of boundary elements: %d\n", sum);
		return 0;
	}
}
