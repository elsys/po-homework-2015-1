#include <stdio.h>

int main()
{
   int i, n, temp, red;
                                                /*n - vuvedena ot nas visochina; red - red na koito se namirame;
                                                temp - maksimalen broi spacove; i - broqch */
   scanf("%d",&n);

   temp = n;

   for (red=1; red<=n; red++)
   {
      for (i=1; i<temp; i++) printf(" ");

      temp--;

      for (i=1; i<=2*red-1; i++) printf("*");

      printf("\n");
   }
   return 0;
}
