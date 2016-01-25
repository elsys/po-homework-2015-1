#include<stdio.h>

int main(){
int b=0,a=0,p;
scanf("%d",&a);
scanf("%d",&b);
b=b>>a;
p=b&1;
printf("%d",p);


return 0;
}
