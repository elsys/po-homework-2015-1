#include<stdio.h>

int main(){
char hex[200];
char prhex[200];
int n,q,h,i=1,j,z,f=0;
scanf("%d",&n);
while(1){
q=n+f;
f++;
i=1;
while(q!=0){
h=q%16;
if(h<10)
h=h+48;
else
h=h+55;
hex[i]=h;
i++;
q=q/16;
}
h=1;
for(j=i-1;j>0;j--){
prhex[h]=hex[j];
h++;
}
for(j=0;j<i;j++)
{
if(prhex[j]==hex[j])
z=1;
else
z=0;
}
if(z==1){
for(j=0;j<i;j++)
{
printf("%c",prhex[j]);
}break;}
if(z==0){}
}
return 0;
}
