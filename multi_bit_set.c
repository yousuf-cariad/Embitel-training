#include<stdio.h>

int main(){
unsigned int res, num, nbits, pos, val;
printf(" Enter the number: ");
scanf("%x", &num);
printf("Enter the position: ");
scanf("%x",&pos);
printf("Enter the number of bits:");
scanf("%x", &nbits);
val = (1<<nbits)-1;
printf("Result: 0x%x",( num | (val<<pos)));
return 0;
}
