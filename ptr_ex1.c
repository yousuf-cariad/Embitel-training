#include<stdio.h>

void main(){
	unsigned int arr[5] = {0,1,2,3,4};
	unsigned int *ptr[5] = {arr, arr+1, arr+2, arr+3, arr+4};
	for(int i=0; i<5; i++){
	printf("arr[i]: %d\n", arr[i]);
	printf("ptr[i]: %x\n", ptr[i]);
	printf("*ptr[i]: %d\n", *ptr[i]);
	printf("*(ptr+i): %x\n", *(ptr+i));
	printf("*(*ptr+i): %d\n", *(*(ptr+i)));
	printf("\n");

	}
}

