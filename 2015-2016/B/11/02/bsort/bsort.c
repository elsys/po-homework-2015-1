#include <stdio.h>

int main()
{
  int arr[1000], n, i, a, b;

  printf("n=\n");
  scanf("%d", &n);

  printf("%d \n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (a = 0 ; a < n - i - 1; a++)
    {
      if (arr[a] > arr[a+1])
      {
        b= arr[a];
        arr[a]   = arr[a+1];
        arr[a+1] = b;
      }
    }
  }


  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", arr[i]);

  return 0;
}
