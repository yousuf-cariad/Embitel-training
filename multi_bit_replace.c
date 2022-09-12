#include<stdio.h>

int main(){
unsigned int res, num, nbits, pos, nval, val;
printf(" Enter the number: ");
scanf("%x", &num);
printf("Enter the position: ");
scanf("%x",&pos);
printf("Enter the number of bits:");
scanf("%x", &nbits);
printf("Enter the new value: ");
scanf("%d", &nval);
val = (1<<nbits)-1;
num = (num & ~(val<<pos));
printf("Result: 0x%x",( num | (nval<<pos)));
return 0;
}
