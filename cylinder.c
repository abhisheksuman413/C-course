#include <stdio.h>

int main ()
{
   int radius,height;
   printf("enter the value of radius");
   scanf("%d", &radius);
   printf("enter the value of height");
   scanf("%d", &height);
   printf("volume of cylinder is %.3f", 3.14*height*(radius*radius));
   return 0;
}