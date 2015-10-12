#include <stdio.h>
void main (void){

    int i;
 printf("numbers of rows");
 scanf("%d",&i);

 int row,k,p;
 for (row=1;row<=i;row++){

 for(k=i-row;k>=1;k--){
 printf(" ");
 }
 for(k=1;k<=(row*2)-1;k++){
 printf("*");
 }
 printf("\n");
 }
 }
