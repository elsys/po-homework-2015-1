#include <stdio.h>
#include <stdlib.h>
int main() {

int strana=3,chisla[3][3],red,kolona=0,sum,sum1,sum2;
int f=0;
printf("\nVavedi chisla:");
for(red=0;red<strana;red++) {
    for(kolona=0;kolona<strana;kolona++)
         scanf("%d",&chisla[red][kolona]);
   }

printf("Kvadratut e:\n");
for(red=0;red<strana;red++){
      printf("\n");
    for(kolona=0;kolona<strana;kolona++){
         printf("\t%d",chisla[red][kolona]);
      }
   }
sum=0;
for(red=0;red<strana;red++){
    for(kolona=0;kolona<strana;kolona++){
        if(red==kolona)
            sum=sum+chisla[red][kolona];
      }
   }
for(red=0;red<strana;red++){
    sum1=0;
      for(kolona=0;kolona<strana;kolona++) {
         sum1=sum1+chisla[red][kolona];
      }
if(sum==sum1)
         f=1;
else{
f= 0;
    break;
      }
   }
for(red=0;red<strana;red++){
      sum2=0;
    for(kolona=0;kolona<strana;kolona++){
         sum2=sum2+chisla[kolona][red];
      }
if(sum==sum2)
         f=1;
else{
f=0;
    break;
      }
   }

if(f==1)
      printf("\nMagicheski");
else
      printf("\nNemagicheski");

   return 0;
}
