#include <stdio.h>
int main()
{
    int i, n;
    int number0=0,number1=0,number2=0,number3=0,number4=0,number5=0,number6=0,number7=0,number8=0,number9=0;
   do{
    printf("Enter number below or equal to 1 billion: \n");
    scanf("%d", &i);
   }while(i>1000000000);
    while(i!=0){
        n = i%10;
        i = i/10;
        if(n==0)number0++;
        if(n==1)number1++;
        if(n==2)number2++;
        if(n==3)number3++;
        if(n==4)number4++;
        if(n==5)number5++;
        if(n==6)number6++;
        if(n==7)number7++;
        if(n==8)number8++;
        if(n==9)number9++;
    }
    printf("The number 0 was seen %d times \n", number0);
    printf("The number 1 was seen %d times \n", number1);
    printf("The number 2 was seen %d times \n", number2);
    printf("The number 3 was seen %d times \n", number3);
    printf("The number 4 was seen %d times \n", number4);
    printf("The number 5 was seen %d times \n", number5);
    printf("The number 6 was seen %d times \n", number6);
    printf("The number 7 was seen %d times \n", number7);
    printf("The number 8 was seen %d times \n", number8);
    printf("The number 9 was seen %d times \n", number9);
}
