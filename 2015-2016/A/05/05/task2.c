#include <stdio.h>
#include <stdlib.h>
/*Velislav Yotov 10a Nomer 5
Function next_generation*/
void next_generation(int *current,int *next, int len) {
int i=0;
int alive_near;
for(i=0;i<len;i++){
alive_near = 0;
if(i-1>=0){
if(current[i-1] == 1) {
alive_near++;
}
}
if(i+1<len){
if(current[i+1] == 1) {
alive_near++;
}
}
if( alive_near == 1 && current[i]==0 && i != 0 && len-1!=i) {
next[i] = 1;
} else {
next[i] = 0;
}
}
}
int main()
{
char ch;
int entered[20],generated[20],n,i=0;
do {
printf( "n=" );
scanf("%d", &n);
}while(n<=0 || n>20);
while(1) {
ch = getchar();
if(ch == '1') {
printf("*");
entered[i] = 1;
i++;
}
if(ch == '0'){
printf(".");
entered[i] = 0;
i++;
}
if(i>=n){
break;
}
}
printf("\n");
int deathCount,loop=0;
do{
next_generation(entered,generated,n);
deathCount=0;
for(i = 0;i<n; i++) {
    if(generated[i]==1){
        printf("*");
    }else {
        deathCount++;
        printf(".");
    }
    entered[i]=generated[i];
}
loop++;
printf("\n");
}while(loop<1000 && deathCount!=n);
return 0;
}
