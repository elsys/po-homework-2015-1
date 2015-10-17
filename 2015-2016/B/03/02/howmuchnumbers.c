#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[100],c[10],p,i;
    scanf("%d", &a);
    for(i=0; i<10; i++) {
        c[i]=0;
    }
    for(i=0; a>0; i++) {
        b[i]=a%10;
        a=a/10;
        p=i;
    }
    for(i=0; i<=p; i++) {
        switch(b[i]) {
            case 0 : c[0]++; break;
            case 1 : c[1]++; break;
            case 2 : c[2]++; break;
            case 3 : c[3]++; break;
            case 4 : c[4]++; break;
            case 5 : c[5]++; break;
            case 6 : c[6]++; break;
            case 7 : c[7]++; break;
            case 8 : c[8]++; break;
            case 9 : c[9]++; break;
        }
    }
    for(i=0; i<10; i++) {
        printf("Number %d : %d times\n", i, c[i] );
    }
    return 0;
}
