#include <stdio.h>
int main()
{
   int n;
   printf("enter the number = ");
   scanf("%d", &n);
   int b = 1;
   int nsp = 1; // number of spaces
   int nsa = n; // number od alphabet
   for (int i = 1; i <= 2 * n + 1; i++)
   {

      int d = b + 64;
      char ch = (char)d;
      printf("%c ", ch);
      b++;
   }
   printf("\n");
   for (int i = 1; i <= n; i++)
   {
      int a = 1;
      for (int j = 1; j <= nsa; j++)
      {

         int d = a + 64;
         char ch = (char)d;
         printf("%c ", ch);
         a++;
      }
      for (int k = 1; k <= nsp; k++)
      {

         printf("  ");
         a++;
      }
      for (int j = 1; j <= nsa; j++)
      {
         int d = a + 64;
         char ch = (char)d;
         printf("%c ", ch);
         a++;
      }
      nsp += 2;
      nsa--;
      printf("\n");
   }

   return 0;
}
