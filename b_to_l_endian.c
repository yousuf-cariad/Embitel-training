#include<stdio.h>

int main(){
	unsigned int swapped, num;
	printf("Enter the Big endian value:");
	scanf("%x", &num);
	printf("%x\n", num);
	swapped = (((num>>24)&0xff) | ((num<<8)&0xff0000) | ((num>>8)&0xff00) | ((num<<24)&0xff000000));
	printf("Little endian value: %x", swapped);
	return 0;
}
