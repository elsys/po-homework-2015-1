#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int array[1000], n, c, d, swap;
  n = 0;
  c = 0;
  while(1==1)
  {
    scanf("\n%d", &array[c]);
    if(array[c] == 42)
    {
        break;
    }
    n++;
    c++;
  }

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] < array[d+1])
      {
        swap = array[d];
        array[d] = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("\n");

  for ( c = 0 ; c < n ; c++ )
  {
     printf("%d\n", array[c]);
  }
  return 0;
}
