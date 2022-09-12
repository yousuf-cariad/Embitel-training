#include <stdio.h>
int main()
{

        int count=0,i,num;

        printf("Enter a number:");
        scanf("%d",&num);

        while(num)
        {
                count+=num&1;
                num>>=1;
        }
       printf("Number of set bits: %d\n",count);
        return 0;

}
