#include <stdio.h>

int main() {
    int matrix[3][3], i, j, sum = 0;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    if (i != j && i != 2 - j) { 
    sum += matrix[i][j];
            }
        }
    }
printf("\nSum of non-diagonal elements: %d\n", sum);
return 0;
}
