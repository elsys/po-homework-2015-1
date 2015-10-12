#include <stdio.h>

int main()
{
int n=0,i=0;
int number0=0,number1=0,number2=0,number3=0,number4=0,number5=0,number6=0,number7=0,number8=0,number9=0;
scanf("%d",&n);
while(n!=0)
{
i=n%10;
n=n/10;

if(i==0){number0++;}
if(i==1){number1++;}
if(i==2){number2++;}
if(i==3){number3++;}
if(i==4){number4++;}
if(i==5){number5++;}
if(i==6){number6++;}
if(i==7){number7++;}
if(i==8){number8++;}
if(i==9){number9++;}
}
printf("cifrata 0 se sreshta %d puti\n",number0);
printf("cifrata 1 se sreshta %d puti\n",number1);
printf("cifrata 2 se sreshta %d puti\n",number2);
printf("cifrata 3 se sreshta %d puti\n",number3);
printf("cifrata 4 se sreshta %d puti\n",number4);
printf("cifrata 5 se sreshta %d puti\n",number5);
printf("cifrata 6 se sreshta %d puti\n",number6);
printf("cifrata 7 se sreshta %d puti\n",number7);
printf("cifrata 8 se sreshta %d puti\n",number8);
printf("cifrata 9 se sreshta %d puti\n",number9);

return 0;
}
