#include<stdio.h>

int  main(){
	unsigned int x = 0x12345678;
	char *ch;
        ch = (char*)&x;
	int *i;
        i = &x;
	if (*ch == 0x78)
		printf("Little Indian\n");
	else
		printf("Big Indian\n");
	printf("%x\n", *ch);
	printf("%d\n", sizeof(*ch));
	printf("%x\n", *i);
	printf("%x", (x>>24));
	return 0;
}
