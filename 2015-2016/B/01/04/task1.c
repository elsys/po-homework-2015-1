#include <stdio.h>

int is_prime(int num){

int sim=2;

if (num>=2){

    while(num%sim!=0)
    {
        sim++;
    }

 if(sim==num) printf("1");
 else printf("0");
           }
else printf("-1");
}

int main(){

int num;

 scanf("%d",&num);

 is_prime(num);

    return 0;
}
