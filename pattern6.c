#include<stdio.h>
int main()
{
     int a,b,j,i;
 for(i=5;i>=1;i--)
{  for(j=1;j<=5;j++)
      {
          if(i<=j)
           printf("*");
       else
         printf(" ");
}
      if(i<=4)
{
       for(a=1;a<=4;a++)
     {
       if(a>=i)
      {
          printf("*");
}
}
}
       printf("\n");
}
    for(i=4;i>=1;i--)
     {    for(j=5;j>=1;j--)
         {
            if(i>=j)
          printf("*") ;
       else
     printf(" ");
}
    if(i>=2)
     {
         for(b=1;b<=i-1;b++)
       {     
            if(b<=i)
printf("*");


}
}
    printf("\n");
}return 0;
}