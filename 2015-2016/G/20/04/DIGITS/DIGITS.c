#include<stdio.h>

void main(void)

{
 int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
 int n;
 scanf("%d", &n);
 while(n>0) 
 {
  switch(n%10)
  {
   case 0: zero++;
    break;
   case 1: one++;
    break;
   case 2: two++;
    break;
   case 3: three++;
    break;
   case 4: four++;
    break;
   case 5: five++;
    break;
   case 6: six++;
    break;
   case 7: seven++;
    break;
   case 8: eight++;
    break;
   case 9: nine++;
    break;  
  }
  n=n/10;
 }
  if(one>0)
  printf("Цифрата 1 се повтаря\n");
  if(two>0)
  printf("Цифрата 2 се повтаря\n");
  if(three>0)
  printf("Цифрата 3 се повтаря\n");
  if(four>0)
  printf("Цифрата 4 се повтаря\n");
  if(five>0)
  printf("Цифрата 5 се повтаря\n");
  if(six>0)
  printf("Цифрата 6 се повтаря\n");
  if(seven>0)
  printf("Цифрата 7 се повтаря\n");
  if(eight>0)
  printf("Цифрата 8 се повтаря\n");
  if(nine>0)
  printf("Цифрата 9 се повтаря\n");
  if(zero>0)
  printf("Цифрата 0 се повтаря\n");
}
