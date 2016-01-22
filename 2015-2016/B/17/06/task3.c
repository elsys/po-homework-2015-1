#include <stdio.h>

int main()
{
   int num, arr[199],j=0,i,help=0;
   scanf("%d",&num);
   for(i=0;i<num;i++)
    scanf("%d",&arr[i]);

   for(i=0;i<num;i++){
        help=0;
    for(j=0;j<=num-1;j++){
        if(arr[i]==arr[j])
            help++;
         if(j==num-1){
            if(help==1)
                printf("%d",arr[i]);
                break;
         }

    }

   }
   return 0 ;
}
