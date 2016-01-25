 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int kit =1 ;
    int helper;
    int box[200];
    int counter =0;
    int base;
    int source;
    int bit;
    int decimal=0;
    

    scanf("%d",&source);

do{

    scanf("%d",&bit);
}while(bit!= 0&&bit != 1);

do{
    scanf("%d",&base);
}while(base<0||base>7);


    while(source !=0)
    {
        box[counter] = source%2;
        source = source /2;
        counter++;
    }
    helper  = counter;

    while(helper<8)
    {
        box[helper] = 0;

       helper++;
    }
    counter =0;
    while(box[counter]!= box[base])
    {
        counter++;
    }
    box[base] = bit;


for(counter=0;counter< 8;counter++){

        decimal = decimal +box[counter]*kit;
       kit =kit *2;

    }
    printf("%d\n",decimal);

    return 0;
}

