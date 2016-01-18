#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){

    int n,v,p,newn = 0;
    int number,rest, brsys, counter;
    int digit, result[8]={0,0,0,0,0,0,0,0};

    scanf("%d", &n);
   scanf("%d", &v);
   scanf("%d", &p);

    if ((!(v==0||v==1))||(p<0||p>7)){
        printf("%s","Wrong range of v or p. Exit");
        return 0;
    }

    number=n;
    brsys=2;
    counter=1;
    while (number>0)
       {rest=number%brsys;
        if (rest==0) {
        digit=0;
    }
        else {
        digit=1;
    }
        number=number/brsys;
        result[8-counter]=digit;
    counter++;
       }

    result[7-p]=v;
    
    newn = result[0]*2;
    
    for (counter=1;counter<7;counter++) {
        newn = (newn + result[counter])*2;
    }
    
    newn = newn + result[7];

    printf("%d \n",newn);

return 0;
}
