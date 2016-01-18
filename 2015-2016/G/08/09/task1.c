#include <stdio.h>

int convert(int b, int masive[]);
int main()
{
    int a,b,binary[8] = {0};
    do{

scanf("%d",&a);

}while(a<0 || a>7);

do{

scanf("%d",&b);

}while(b<0 || b>200);

convert(b,binary);

printf("%d",binary[7-a]);
 return 0;
}

int convert(int b, int masive[]){
int helper,i;

helper=b;

for(i=7;i>=0 || helper;i--){

    masive[i]=helper%2;
    helper=helper/2;

}

return 0;
}
