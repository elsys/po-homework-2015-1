#include <stdio.h>
int main(){
int n,i,b=1;

printf("Vuvedi vicochinata: ");scanf("%d",&n);

while(n>0)
 {
     printf("\n");
  for(i=1;i<n;i++){
            printf(" ");
        }
        for(i=0;i<b;i++){
            printf("A");
        }
            for(i=1;i<n;i++){
                printf(" ");
  }
  b=b+2;

  n--;
 }

return 0;
}
