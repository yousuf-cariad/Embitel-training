#include<stdio.h>
int main(){
	unsigned char x = 0xab;
	int a=5, b=6, temp;
	printf("%c",x);
	temp=a, a=b, b=temp;
	printf("%d %d %d", a, b, temp);
	unsigned int s = 0x12345678;
	printf("%x", s);
	return 0;
}
