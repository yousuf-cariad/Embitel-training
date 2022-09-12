#include<stdio.h>
static int num;

void fact(){
	int res=1;
	printf("%d\n", num);
	while(num>1){
	res = res*num;
	num--;
	}
	//num+=10;
	printf("Result: %d\n", res);
}
