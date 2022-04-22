int main ()
{
   int a, n, y;
   printf("enter the teble :");
   scanf("%d",&n);
   for(a=10;a>0;a--){
       y=n*a;
       printf("%d x %d = %d\n", n, a, y);
   }
   return 0;
}