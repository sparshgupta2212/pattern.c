#include<stdio.h>
int main()
{
   int a,b,c;
   for (a=1;a<=5;a++)
   {
      for (b=1;b<a;b++)
      {
         printf(" ");
      }
      for (c=5;c>=a;c--)
      {
         printf("*");
      }
      printf("\n");
   }
}