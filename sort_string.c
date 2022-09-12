#include <stdio.h>
#include <string.h>
int main () {
   char s1[20];
   char temp;
   scanf("%s",s1);
   int i, j;
   int n  = strlen(s1);
  for (i = 0; i < n; i++) {
      for (j = i+1; j < n; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
      }
  }
      for(i=0;i<n;i++){
              printf("%c",s1[i]);
      }
      return 0;
}
