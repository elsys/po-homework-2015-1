#include <stdio.h>

int main()
{
    int n=0,i=0;
    int br0=0,br1=0,br2=0,br3=0,br4=0,br5=0,br6=0,br7=0,br8=0,br9=0;
    printf("\n Vuvedi chislo:");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        if(i==0){br0++;}
        if(i==1){br1++;}
        if(i==2){br2++;}
        if(i==3){br3++;}
        if(i==4){br4++;}
        if(i==5){br5++;}
        if(i==6){br6++;}
        if(i==7){br7++;}
        if(i==8){br8++;}
        if(i==9){br9++;}
    }
    printf("\nbroi 0: %d",br0);
    printf("\nbroi 1: %d",br1);
    printf("\nbroi 2: %d",br2);
    printf("\nbroi 3: %d",br3);
    printf("\nbroi 4: %d",br4);
    printf("\nbroi 5: %d",br5);
    printf("\nbroi 6: %d",br6);
    printf("\nbroi 7: %d",br7);
    printf("\nbroi 8: %d",br8);
    printf("\nbroi 9: %d",br9);
    return 0;
}
