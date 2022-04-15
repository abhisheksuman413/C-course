#include <stdio.h>

int main ()
{
   int first,second,third,fourth;
   printf("enter first no :");
   scanf("%d", &first);
   printf("enter second number :");
   scanf("%d", &second);
   printf("enter third no :");
   scanf("%d", &third);
   printf("enter fourth no :");
   scanf("%d", &fourth);
   if(first>second && first>third && first>fourth)
   {
       printf("%d is grster no ", first);
   }
   else if(second>first && second>third && second>fourth)
   {
       printf("%d is grster no ", second);
   }
   else if(third>first && third>second && third>fourth)
   {
       printf("%d is grster no ", third);
   }
   else if(fourth>first && fourth>second && fourth>third)
   {
       printf("%d is grster no ", fourth);
   }
   return 0;
}