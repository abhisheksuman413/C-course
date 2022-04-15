#include <stdio.h>

int main ()
{
   int i=34;
   int *j=&i;
   printf("%d", i);
   printf("%d\n", *j);
   printf("%u\n", &i);
   printf("%u\n", j);
   printf("%u", &j);
   return 0;
}