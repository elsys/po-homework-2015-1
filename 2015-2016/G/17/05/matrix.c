#include<stdio.h>
int main()
{
    int nums[4][4];
    int r = 0,c = 0;
    int nums2[4][4];
    for( r=0;r <= 3; r++)
    {
     for(c =0;c<= 3;c++)
      {
         scanf("%d", &nums[r][c]);
      }
    }
    r=0;
    c=0;
   
    for(r =0;r<=3;r++)
    {
     for(c =0;c<=3;c++)
     {
         nums2[r][c] = nums[c][r];
     }
    }
 
     for(r =0;r<=3;r++)
    {
      printf("\n");
      for(c =0;c<=3;c++)
      {
         printf("%d \t",nums2[r][c]);
      }
    }
 
 
     return 0;
}
