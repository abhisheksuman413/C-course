#include <stdio.h>

int main ()
{
   int english,math,hindi;
   printf("enter number of english");
   scanf("%D", &english);
   printf("enter the number of math");
   scanf("%d", &math);
   printf("enter the number of hindi ");
   scanf("%d", &hindi);
   if(math+english+hindi>=120)
   {
       if(math>=33&&hindi>=33&&english>=33)
       {
            printf("student is pass");
       }
       else
       {
           printf("student is fail");
       }
   }
   else
   {
       printf("student is fail");
   }
   
   return 0;
}