#include<stdio.h>
#define  A 10
#define  B 20

#if 1
int sum(int a, int b){
        return a+b;
}
#endif

int main(){
	int *p;
	char a = 'x';
	int *p2 = &a;
	int arr[] = {1,2,3,4,5};
	//int *ptr = arr;
	//printf("%ld",sizeof(*p));
	//printf("%ld",sizeof(*p2));
        //printf("Sum = %d", sum(A,B));
	
	for (int *ptr=arr; ptr<arr+(sizeof(arr)/sizeof(arr[0])); ptr++)
		printf("%d\n", *ptr);

        return 0;
}

