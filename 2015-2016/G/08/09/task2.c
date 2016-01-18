#include <stdio.h>
#define bits 8
int convert(int binary, int masive[],int v,int p);
int main()
{

    int i,n,v,p;

    int bin[bits] = {-1};

    for(i=0; i<bits; i++)
    {
        bin[i]=(0);
    }
    scanf("%d",&n);

    do
    {

        scanf("%d",&v);

    }
    while(v!=1 && v!=0);

    do
    {

        scanf("%d",&p);

    }
    while(p<0 ||p>7);

    convert(n,bin,v,p);

    return 0;
}


int convert(int binary,int masive[],int v,int p)
{
    int i,helper,counter,number=0,j;

    helper=binary;

    for(i=7; i>=0; i--)
    {

        masive[i]=helper%2;
        helper=helper/2;

    }

    masive[bits-p-1]=v;

    for(i=bits-1,counter=0,helper=1; i>=0; i--)
    {

            if(masive[i]==1)number=number+helper;

                counter++;

 for(j=1,helper=1; j<=counter;j++)
    helper=helper*2;

    }
printf("%d",number);
    return 0;
}
