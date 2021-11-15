#include <stdio.h>

int main()
{
   int n;
   int sum=0;
   printf("\nNhap n:");
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
      sum+=n; 
   }
    printf("Sum=%d",sum);
}