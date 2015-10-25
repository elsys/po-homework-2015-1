//Na vhoda se poluchava niz koito predstavlqva razburkano teste ot karti.(niz ot 13simvola).
//Vashata zadacha e da podredite testeto ot 2-A(A-aso,K-pop,Q-dama,J-vale,T-desetka, kartite ot 2-9 sus suotvetnite cifri)
//Velislav Yotov 10a Nomer-5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findValue(char a) {
int n=0;
switch (a) {
case '2':
n=2;
break;
case '3':
n=3;
break;
case '4':
n=4;
break;
case '5':
n=5;
break;
case '6':
n=6;
break;
case '7':
n=7;
break;
case '8':
n=8;
break;
case '9':
n=9;
break;
case 'T':
n=10;
break;
case 'J':
n=11;
break;
case 'Q':
n=12;
break;
case 'K':
n=13;
break;
case 'A':
n=15;
break;
default:
n=0;
}
return n;
}

int main()
{
int i,z,t,v,x,n,y;
char a[13],b[13]="23456789TJQKA",temp;
printf("Enter cards : ");
scanf("%s",&a);
for(i=0;i<strlen(a)-1;i++){
t=0;
for(z=0;z<strlen(b)-1;z++){
if(a[i]==b[z]) {
t=1;
}
}
if(t==0){
printf("invalid deck");
return 0;
}
}
for(x=0; x<strlen(a); x++)
    {
        for(y=0; y<strlen(a)-1; y++)
            {
            if(findValue(a[y])>findValue(a[y+1]))
                {
                    int temp = a[y+1];
                    a[y+1] = a[y];
                    a[y] = temp;
                }
            }
    }
        printf("%s\n",a);
}
