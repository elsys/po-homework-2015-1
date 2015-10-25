#include<stdio.h>

int main()
{
int a=1,b=1,n,v=0;
char c;
printf("S kakvo da se postroi:");
scanf("%c",&c);
scanf("%d",&n);
while(v<n){
printf("\n");
while(a>=1){
printf("%c",c);
a--;}
v++;
a=b+2;
b=b+2;}
return 0;
}


