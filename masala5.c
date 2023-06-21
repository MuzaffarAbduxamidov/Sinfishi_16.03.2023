#include <stdio.h>

int main()
{
   int son;
   printf("Son kiriting: ");
   scanf("%d", &son);

   if (son%2==0)
   {
      printf("%d", son=son*2);
   }
   else
   {
      printf("%d", son=son-2);
   }

   return 0;
}
