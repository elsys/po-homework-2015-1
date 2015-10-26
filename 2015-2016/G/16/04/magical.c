#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int b;
    int i;
    int br;
    int sum=0;
    int sum1=0;
    int n1;
    int opa=1;
    int y;
    int helper;
    int helpI=0;
    printf("Vuvedete stranta na kvadrata :");
    scanf("%d",&n);


    helper = n;

    b = n * n ;
    int square[b];

    for(i=0,br=0;i<b;i++,br++)
    {

            scanf("%d",&square[i]);
            if((br==(b/n)-1)&& i!=b-1)
            {
                printf("Nov red !\n");
                br=-1;
            }


    }
    for(i=0;i<n;i++)
        {

            sum = sum + square[i];

        }

      n1 = n;

      n1 = n1 + n;






    for(;n1<b;)
    {


        for(i=n;i<n1;i++)
        {

            sum1 = sum1 + square[i];

        }

        n = n1;
        n1 = n1 + n;

        if(sum != sum1)
        {

        printf("\nITS NOT MAGICAL ");


        }

        sum1=0;



    }



    sum1=0;
    while(helpI<helper){
    for(y=0,i=helpI;y<helper;y++,i = i + helper){
        sum1 = sum1 + square[i];
    }

    //printf("------------------------------------>%d %d",sum1,i);
    if(sum != sum1){
        opa = 0;
        printf("\nITS NOT MAGICAL ");
        break;
    }
    sum1=0;
    helpI++;
    }
    if(opa)printf("Yes its MAGICAL  ");

    return 0;

    }
