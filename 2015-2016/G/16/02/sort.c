#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    int n;
    int i=0;
    int b;
    int mass[1000];




    
    for(i=0;mass[i-1]!=42;i++){
        scanf("%d",&mass[i]);
    }
    n = i;
    for(i=0;i<n;i++){
        for(x=i+1;x<n;x++){
            if(mass[i] > mass[x]){
               b = mass[i];
               mass[i] = mass[x];
               mass[x] = b;
            }
        }
    }

   for(i=0;i<n-1;i++){
        printf("%d , ",mass[i]);
   }


    return 0;
}
