#include<stdio.h>
void insertion_sort(int arr[], int n){
	int i, j, key;
	for (i = 1; i < n; i++){
	key = arr[i];
	j = i - 1;
	while (j >= 0 && arr[j] > key) {
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[j + 1] = key;
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
	insertion_sort(data, n);
	printf("Sorted array (Insertion Sort):\n");
	for (int i = 0; i < n; i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	return 0;
}

