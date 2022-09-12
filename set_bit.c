#include<stdio.h>

int main(){
unsigned int res, num, pos;
printf(" Enter the number: ");
scanf("%x", &num);
printf("Enter the position: ");
scanf("%x",&pos);
res = num | (1<<pos);
printf("Result: 0x%x",( num | (1<<pos)));
return 0;
}
