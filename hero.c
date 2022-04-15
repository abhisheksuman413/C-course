#include <stdio.h>

int main ()
{
   int n, result=1;
   printf("enter a number :");
   scanf("%d",&n);
   for(n;n>0;n--){
   result=result*n;
   }
   printf("%d", result);
   return 0;
}