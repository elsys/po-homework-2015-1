#include <stdio.h>

int main(){

int number[10]={0,0,0,0,0,0,0,0,0,0};
int i,n,k;

scanf("%d", &n);

while(n!=0){

k=n%10;
number[k]=number[k]+1;
n=n/10;

}

for(i=0;i<10;i++){

if(number[i]!=0){

 printf("%d - %d\n", i, number[i]);

}

}

return 0;

}

