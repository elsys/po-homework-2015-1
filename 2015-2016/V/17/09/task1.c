#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int a=0,b=0, n, r, s, co;
    char d, res[8]="00000000";
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a<0||a>7)||(b<0||b>200)){
        scanf("%d", &a);
        scanf("%d", &b);
        return 0;
    }
    n=b;
    s=2;
    co=1;
    while (n>0)
       {r=n%s;
        if (r==0) {d='0';}
        else {d='1';}
        n=n/s;
        res[8-co]=d;
        co++;
       }
    printf("%c",res[7-a]);
    
return 0;
}
