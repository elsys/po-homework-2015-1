#include <stdio.h>

void next_generation(int current, int next, int length);

int main()
{
 int currentGen[20], nextGen[20], n, i, j, temp;

    do
    {
        printf("Enter length for the cell chain(you can only use a number between 0 and 20):\n");
        scanf("%d", &n);
    }
 while(n<0 || n>20);
 for(i=0; i<n; i++)
  {
      do
            {
                printf("Enter a number(you can only use 1 or 0):\n");
                scanf("%d", &currentGen[i]);
            }
   while(currentGen[i]!=0 && currentGen[i]!=1);
  }

 if(currentGen[0]!=0 || currentGen[n-1]!=0)
  {
   printf("Error! Cell chain must start and end with 0.\n");
   return 0;
  }

 for(i=0; i<n; i++)
 {
  if(currentGen[i] == 0)
  {
     printf(".");
  }
  else if(currentGen[i] == 1)
  {
      printf("*");
  }
 }

 nextGen[0]=0;
 nextGen[n-1]=0;
 for(i=0; i<999 && temp!=n; i++)
 {
  next_generation(currentGen, nextGen, n);
  for(j=0, temp=0; j<n; j++)
  {
   if(currentGen[j] == 0) temp++;
  }
 }
 printf("\n");

 return 0;
}

void next_generation(int current, int next, int length)
{
 int i;

 printf("\n");

 for(i=0; i<length; i++)
 {
  if(i==0) printf(".");

  else if(i==length-1) printf(".");

  else if(current[i-1] != current[i+1])
   {
    next[i]=1;
    printf("*");
   }
  else
   {
    next[i]=0;
    printf(".");
   }
 }

 for(i=0; i<length; i++) current[i] = next[i];
}
