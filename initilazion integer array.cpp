//initilization integer array
#include<stdio.h>
int main(){
	//direct initialization
	int int_array[] = {1,2,3,4,5};
	//initialization with specific size
	int int_[5]= {10, 20, 30 , 40, 50};
	//partial initilazation (remaing element are initilazed to 0)
	int int_array3[10] = {1,2,3};
	printf("int_array1: ");
	for (int i = 0; i< 5; i++){
		printf("%d", int_array[i]);
	}
	printf("\n");
	printf("int_array2: ");
	for(int i = 0; i<10;i++){
		printf("%d", int_array3[i]);
	}
	printf("\n");
	printf("int_array3: ");
	for (int i = 0; i<10;i++){
		printf("%d",int_array3[i]);
	}
	printf("\n");
	return 0;
}
