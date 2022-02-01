#include <stdio.h>

int main ()
{
   int a=5;
   int *point;
   point = &a;
   printf("the adress of a is %u\n", &a);
   printf("the adress of a is %u\n", point);
   printf("the vale of a is %d\n", (*point));
   return 0;
}