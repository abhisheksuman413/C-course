#include <stdio.h>
float aveg(int a, int b, int c);

int main ()
{
   int first, second, third;
   float d;
   printf("enter the first no :\n");
   scanf("%d", &first);
   printf("enter the second no :\n");
   scanf("%d", &second);
   printf("enter the third no :\n");
   scanf("%d", &third);
   d=aveg(first, second, third);
   printf("the average is %.4f", d);
   return 0;
}

float aveg(int a, int b, int c){
    float result;
    result = (a + b + c)/3;
    return result;
}