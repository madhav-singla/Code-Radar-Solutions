#include <stdio.h>
int main()
{
   int n, m, a;
   printf("Enter the number >>>");
   scanf("%d", &n);
   printf("Enter the number >>>");
   scanf("%d", &m);

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= n - i; j++)
       {
           printf(" ");
       }

       a = 1;
       for (int k = 1; k <= 2*i-1; k++)
       {
           printf("*");
       }

       printf("\n");
   }

   return 0;
}