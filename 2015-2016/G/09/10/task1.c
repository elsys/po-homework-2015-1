#include<stdio.h>



int main(){

    
int a,b,remainder,quotient;

    
int binaryNumber[8],i=1,j;


    
    
scanf("%d%d", &a, &b);


    
quotient = b;


    
while(quotient!=0){

         
binaryNumber[i++]= quotient % 2;

         
quotient = quotient / 2;

    }

	

    
if(a > sizeof(binaryNumber)){printf("0");}
	
else
    printf("%d\n",binaryNumber[a]);


    
return 0;

}
