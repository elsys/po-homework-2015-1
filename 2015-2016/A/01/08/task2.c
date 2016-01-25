#include <stdio.h>

int main(){

char sms[160];
int i=0,n=0;

fgets (sms, 160, stdin);

for (i=0;sms[i]!='\n';i++){

if(sms[i]==' ' || sms[i]=='a' || sms[i]=='d'|| sms[i]=='g'|| sms[i]=='j'|| sms[i]=='m'|| sms[i]=='p'|| sms[i]=='t'|| sms[i]=='w'){
n += 1;
}
if(sms[i]=='b'|| sms[i]=='e'||sms[i]=='h' || sms[i]=='k' || sms[i]=='n'|| sms[i]=='q'|| sms[i]=='u'|| sms[i]=='x'){
n += 2;
}
if(sms[i]=='c'|| sms[i]=='f'|| sms[i]=='i'|| sms[i]=='l'|| sms[i]=='o'|| sms[i]=='r'|| sms[i]=='v'|| sms[i]=='y'){
n += 3;
}
if(sms[i]=='s'||sms[i]=='z'){
n += 4;
}
}

printf("%d\n",n);

return 0;
}
