#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numbers[1000], i, j, n= 0, c = 0;
	for(i = 0; i < 1000 && numbers[i - 1] != 42; i++)
	{
		scanf("%d", &numbers[i]);
	}

	n = i;
  for(i = 0 ; i < n - 1 ; i++)
  {
    for(j = 0 ; j < n - i - 1; j++)
    {
      if(numbers[j] > numbers[j+1])
      {
        c = numbers[j];
        numbers[j] = numbers[j+1];
        numbers[j+1] = c;
      }
    }
  }

  for( i = 0 ; i < n ; i++ )
     printf("%d\n", numbers[i]);
  return 0;
}
