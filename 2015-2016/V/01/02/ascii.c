#include <stdio.h>

int main()
{
  char znak;
  int j;
  for(j=0;j<255;j++)
  {
    znak=j;
    printf(" %d - %c ",j,znak);
  }
  return 0;
}
