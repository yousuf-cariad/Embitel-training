#include<stdio.h>

int sum(int n){
	if(n<10)
		return n;
	int sum1 =0, i;
	while(n>0){
		i = n%10;
		n = n/10;
		sum1 = sum1+i;
	}
	sum(sum1);
}

int  main(){
	int num, i, rev=0, sum1=0;
	printf("Enter the number:\n");
	scanf("%d", &num);
	sum1 = sum(num);
	while(num>0){
		i = num%10;
		num = num/10;
		rev = rev*10 + i;
	}
	printf("Reversed number: %d", rev);
	printf("Sum = %d", sum1);
	return 0;
}
