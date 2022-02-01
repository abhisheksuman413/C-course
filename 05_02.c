#include <stdio.h>
float temp(float c);

int main ()
{
   float cel;
   printf("enter the celsious temperature :\n");
   scanf("%f", &cel);
   printf("the farehanite temperature is : %f\n", temp(cel));
   return 0;
}
float temp(float c){
float result;
result = (1.8 * c) + 32;
return  result;
}