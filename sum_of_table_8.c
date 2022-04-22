#include <stdio.h>

int main ()
{
   int n=8, a=0, sum=0, y;
   
   while(a<10){
       y =n*(a+1);
       printf("%d x %d = %d\n", n, a+1, y);
       sum += y;
       a++;
   }
   printf("%d", sum);
   return 0;
}