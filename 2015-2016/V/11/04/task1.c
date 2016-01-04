#include<stdio.h>
void main(void)
{
  int a,i,c,k=0;
  scanf("%d",&a);
  do{
        c=a;
        i=0;
        do{
            if(k==c%10){
                i++;
                }
            c=c/10;
    }while(c>=1);
    if(i>1){
        printf("chisloto %d \n",k);
    }
    k++;
  }while(k<10);
}
