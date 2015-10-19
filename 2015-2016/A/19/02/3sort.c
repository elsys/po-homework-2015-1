#include<stdio.h>
#define max 1000

int main()
{
  int c,d,swap,array[max],n=0;

  printf("Enter integers:\n");
  printf("Enter 42 to stop.\n\n");

  for (c=0;;c++)
  {
      scanf("%d",&array[c]);
      if(array[c]==42) break;
      n++;
  }
          for(c=0;c<(n-1);c++)
          {
            for(d=0;d<n-c-1;d++)
            {
              if(array[d]>array[d+1])
              {
                swap=array[d];
                array[d]=array[d+1];
                array[d+1]=swap;
              }
            }
          }

  printf("\nSorted list in ascending order:\n");
  for (c=0;c<n;c++)
     printf("%d\n", array[c]);

     return 0;
} 
