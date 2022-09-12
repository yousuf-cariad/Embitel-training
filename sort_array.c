#include<stdio.h>
int main()
{
        int x1[20],n,temp;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
       scanf("%d",&x1[i]);
        }

for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
         if (x1[i] > x1[j]) {
            temp  = x1[i];
            x1[i] = x1[j];
            x1[j] = temp;
         }
      }
}
for(int i=0;i<n;i++){
        printf("%d ",x1[i]);
}
return 0;
}
