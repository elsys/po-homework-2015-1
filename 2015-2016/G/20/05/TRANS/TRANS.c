#include<stdio.h>
int main()
{
    int arr[4][4];
    int sarr[4][4];
    int r = 0;
    int c = 0;
    for(r =0;r<=3;r++)
    {
    for(c =0;c <= 3;c++)
      {
        scanf("%d",&arr[r][c]);
      }
    }
    r = 0;c = 0;
    for(r =0;r<=3;r++)
    {
    for(c =0;c<=3;c++)
      {
        sarr[r][c] = arr[c][r];
      }
    }
    r =0;c =0;
     for(r=0;r<=3;r++)
     {
      for(c=0;c<=3;c++)
      {
        printf("%d ",sarr[r][c]);
      }
     printf("\n");
   }
     return 0;
}
