#include <stdio.h>

int main ()
{
   int a=1, b=0;
   while(a<=10){
       b=a+b;
       a++;
   }
   printf("%d", b);
   return 0;
}