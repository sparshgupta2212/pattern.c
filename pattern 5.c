#include <stdio.h>
int main()
{
	int i,j,m,c=9;
	for(i=0;i<5;i++)
	{
		for(j=0;i>j;j++)
		{
			printf(" ");
		}
          for(m=c;m>0;m--)
		{
			printf("*");
		}
		c-=2;
		printf("\n");
	}
     int n=1;
	for(i=0;i<5;i++)
	{
		for(j=4;j>i;j--)
		{
			printf(" ");
		     }
		for(m=n;m>0;m--)
		{
			printf("*");
		}
		n+=2;
		printf("\n");
	}
}

