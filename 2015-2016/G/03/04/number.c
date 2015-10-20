 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int i=0;
    int number;
    int counter;
    int b;
int    j=0;
    printf("enter number =");scanf("%d",&number);
    while(number!=0){
            n[i]=number%10;
        number=number/10;
        i++;
    }
    for(counter=0;counter<i;counter++)
    {
     if(n[counter]==n[counter+1])
     {
       b=n[counter+1];
        printf("\nnumber is =%d",b);
     }



    }

for(j=0;j<=counter;j++)
{


}

    return 0;
}

