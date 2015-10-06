#include <stdio.h>

int main()
{
    int n=0,i=0;
    int counter0=0,counter1=0,counter2=0;
    int counter3=0,counter4=0,counter5=0;
    int counter6=0,counter7=0,counter8=0;
    int counter9=0;

    printf("Enter Number -");
    scanf("%d",&n);

    while(n!=0)
    {
        i=n%10;
        n=n/10;

        if(i==0){counter0++;}
        if(i==1){counter1++;}
        if(i==2){counter2++;}
        if(i==3){counter3++;}
        if(i==4){counter4++;}
        if(i==5){counter5++;}
        if(i==6){counter6++;}
        if(i==7){counter7++;}
        if(i==8){counter8++;}
        if(i==9){counter9++;}

    }
     printf("0 >>%d\n",counter0);
     printf("1 >>%d\n",counter1);
     printf("2 >>%d\n",counter2);
     printf("3 >>%d\n",counter3);
     printf("4 >>%d\n",counter4);
     printf("5 >>%d\n",counter5);
     printf("6 >>%d\n",counter6);
     printf("7 >>%d\n",counter7);
     printf("8 >>%d\n",counter8);
     printf("9 >>%d\n",counter9);

    return 0;
}
