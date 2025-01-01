//find sum of matrix 3 by 3 using c code
#include<stdio.h>
#define ROWS 3
#define COLS 3
int main (){
	int matrix[ROWS][COLS];
	int row, col;
	int sum = 0;
	printf("Enter the element of the 3x3 matrix:\n");
	for (row = 0; row < ROWS; row++){
		for(col = 0;col < COLS; col++){
			printf("Enter element at [%d][%d]: ",row, col);
			scanf("%d", &matrix[row][col]);
		}
	}
	for (row = 0; row < ROWS; row++){
		for (col = 0; col < COLS; col++){
			sum += matrix[row][col];
		}
	}
	printf("\nThe entered matrix is:\n");
	for (row = 0; row < ROWS; row++){
		for (col = 0; col < COLS; col++){
			printf("%d\t", matrix[row][col]); // \t for tab spacing
		}
		printf("\n");
	}
	printf("\nThe sum of all element in the matrix is: %d\n", sum);
	return 0;
}
