//program for addition 2 by 2 matrix
#include<stdio.h>
int main(){
	int matrix1[2][2], matrix2[2][2], sum[2][2], i, j;
	printf("enter element of the first matrix: \n");
	for(i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("enter element of the second matrix:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}
	for(i = 0; i < 2; i++){
		for (j = 0; j< 2; j++){
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	printf("\nSum of the matrices:\n");
	for (i = 0; i< 2; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
