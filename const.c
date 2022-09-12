#include<stdio.h>
void main(){
	const int a =20;
	const int *p = &a;
	int *ptr = &p;
	**ptr =30;
	printf("%d", a);
}

