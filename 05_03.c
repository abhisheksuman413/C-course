#include <stdio.h>
float force( float m){
   float result, g=9.8;
   result = m * g;
   return result;

}
int main ()
{
   float mass;
   printf("enter the vale of mass :\n");
   scanf("%f", &mass);
   printf("The force is equal to :%f\n", force(mass));
   return 0;
}