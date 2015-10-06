#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,c,d,swap,i=0,count,number,arr[1000];

    for(count=0;count<1000;count++){
            printf("Vuvedi chislo:");
            scanf("%d", &arr[count]);
            if(arr[count]==42){break;}
            n=count;
        }
    n++;
    for (c = 0 ; c < ( n - 1 ); c++)
    {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
  for(count=0;count<n;count++){
            printf("%d\n", arr[count]);
        }
    return 0;
}
