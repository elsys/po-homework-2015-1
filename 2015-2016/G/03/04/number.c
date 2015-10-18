 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int n[20];
    int b=1;
    int counter=0;
    int j=0;
    int cut=0;
    int h=0;
    printf("enter number =");scanf("%d",&num);
for(i=0;num!=0;i++){

     n[i]=num%10;
     num=num/10;
}
if(i==4)
{
    for(b=0;b<i;b++)
    {
       if(n[b]==n[i-1]){
        counter++;
        j=n[b];
       }


    }
}




printf("\nnumber of pairs=%d",counter);
if(i==4){
    printf("\nnumber %d; %d",j,h);
}
if(i<4)
{
    printf("number=%d",cut);
}

return 0;
}

