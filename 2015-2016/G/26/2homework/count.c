#include <stdio.h>

int main()
{
  int numb=0,counter=0;
  int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
printf("\n Enter a number:");
scanf("%d",&numb);
    
while(numb!=0)
  {
counter = numb%10;
numb=numb/10;

if(counter == 0){n0++;}
if(counter == 1){n1++;}
if(counter == 2){n2++;}
if(counter == 3){n3++;}
if(counter == 4){n4++;}
if(counter == 5){n5++;}
if(counter == 6){n6++;}
if(counter == 7){n7++;}
if(counter == 8){n8++;}
if(counter == 9){n9++;}
  }
    printf("\n broi 0: %d",n0);
    printf("\n broi 1: %d",n1);
    printf("\n broi 2: %d",n2);
    printf("\n broi 3: %d",n3);
    printf("\n broi 4: %d",n4);
    printf("\n broi 5: %d",n5);
    printf("\n broi 6: %d",n6);
    printf("\n broi 7: %d",n7);
    printf("\n broi 8: %d",n8);
    printf("\n broi 9: %d",n9);
    return 0;
}
