#include <stdio.h>

void fun(int a){
    printf(" the adress of a is %u\n", &a);
}

int main ()
{
   int i = 4;
   printf("the value of i is %d\n", i);
   fun(i);
   printf("the adress of i is %u\n", &i);
   return 0;
}