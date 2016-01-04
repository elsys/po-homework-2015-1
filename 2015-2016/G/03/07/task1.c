#include <stdio.h>
#include <stdlib.h>
void rotr(int *a,int *b,int *c);
int main(){
int *z =0;
int *x = 0;
int *y = 0;
rotr(z,x,y);

return 0 ;}
void rotr(int *a,int *b,int *c){



    int box= 0;
    int cut=0;
    int i =1;
    int n;
int bex;
int base;
int boss;
    scanf("%d",&n);
scanf("%d",&bex);
    scanf("%d",&base);
     scanf("%d",&boss);

     for(i=1;i<=n;i++){
            cut = bex;
box = base;
bex = boss;
base = cut ;
boss =box;}

a = &bex;
b = &base;
c = &boss;
printf("%d\n",*a);
printf("%d\n",*b);
printf("%d\n",*c);

}

