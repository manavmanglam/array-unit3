//program for initiallising character array
#include<stdio.h>
int main(){
	//direct initilationzation
	char char_array1[] = {'a', 'b','c','\0'};
	//initilazation with a string literal
	char char_array2[] = "hello";
	//initialization with a specific size
	char char_array3[10] = {'h','e','l','l','o','\0'};
	printf("char_array1: %s\n", char_array1);
	printf("char_array2: %s\n", char_array2);
	printf("char_array3: %s\n", char_array3);
	return 0;
}
