#include <stdio.h>

int main()
{
   int son1; 
   printf ("1-sonni kiriting: ");
   scanf ("%d",& son1);
   int son2;
   printf ("2-sonni kiriting: ");
   scanf ("%d", &son2);

   if (son1>son2)
   {
     printf("Katta son: %d", son1);
   }
   else if (son1<son2)
   {
     printf("Katta son: %d", son2);
   }
   else if (son1==son2)
   {
     printf("Kiritilgan sonlar teng: %d=%d", son1, son2);
   }
   else
   {
     printf("Sonlarni xato kiritdingiz: %d , %d", son1, son2);
   }

   return 0;
}
