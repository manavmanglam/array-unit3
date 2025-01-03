#include<stdio.h>
void selection_sort(int arr[], int n) {
	int i, j , min_idx;
	for (i = 0; i < n - 1; i++){
		min_idx = i;
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr[min_idx]){
		         min_idx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}
int main(){
	int data[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(data) / sizeof(data[0]);
	printf("Orignal array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	selection_sort(data, n);
	printf("Sorted array (selection sort);\n");
	for (int i = 0; i < n; i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	return 0;
}
