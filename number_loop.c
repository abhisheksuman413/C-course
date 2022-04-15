#include <stdio.h>

int main ()
{
   int a=0, n;
   printf("enter the teble :");
   scanf("%d",&n);
   while(a<10){
       printf("%d x %d = %d\n", n, a+1, n*(a+1));
       a++;
   }
   return 0;
}