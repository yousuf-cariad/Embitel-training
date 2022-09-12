#include<stdio.h>
void (*funcp)(void);
void display(){
	printf("Display function called");
}


int main(){
	funcp = &display;
	(*funcp)();
	return 0;
}	
