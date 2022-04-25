#include <stdio.h>

int main ()
{
   int celsius;
   printf("enter the value of celsius :");
   scanf("%d", &celsius);
   printf("the value of celsius in fahrenheit is %.3f",(celsius-32)*0.55);
   return 0;
}