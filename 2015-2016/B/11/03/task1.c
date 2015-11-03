#include<stdio.h>
int main()
{
	int high,i,j;
    char ch='*';
    scanf("%d",&high);

   for (i=0;i<=high;i++) {
      printf("\n");
      for (j=0;j<i*2-1;j++)
         printf("%c", ch);
   }
   return(0);
}

