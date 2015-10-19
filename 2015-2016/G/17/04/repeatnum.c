#include <stdio.h>

int main ()

{
int num,i=0,zero=0,one=0,two=0,three=0;
int four=0,five=0,six=0,seven=0,eight=0,nine=0;
printf("Input num=");scanf("%d",&num);
while(num!=0)
{
if(num%10==0){zero++;num=num/10;}
if(num%10==1){one++;num=num/10;}
if(num%10==2){two++;num=num/10;}
if(num%10==3){three++;num=num/10;}
if(num%10==4){four++;num=num/10;}
if(num%10==5){five++;num=num/10;}
if(num%10==6){six++;num=num/10;}
if(num%10==7){seven++;num=num/10;}
if(num%10==8){eight++;num=num/10;}
if(num%10==9){nine++;num=num/10;}
}
if(zero>1){printf("\n zeros");}
if(one>1){printf("\n units");}
if(two>1){printf("\n couples");}
if(three>1){printf("\n threes");}
if(four>1){printf("\n fours");}
if(five>1){printf("\n fives");}
if(six>1){printf("\n sixes");}
if(seven>1){printf("\n sevens");}
if(eight>1){printf("\n eights");}
if(nine>1){printf("\n nines");}


return 0;
}
