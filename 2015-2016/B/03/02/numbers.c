#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,swap,p,cont,change=0,k=1;
    for(i=0; i<1000; i++) {
        a[i]=0;
    }
    i=-1;
    do {
        i++;
        scanf("%d", &a[i]);
    } while(a[i]!=42);
    p=i;
    for(cont=1; cont>0; change=0,k++) {
        for(i=0; i<p; i++) {
            if(a[i]>a[i+1]) {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
                change++;
            }
            if(i==p-1&&change>0) {
                cont=1;
            } else {
                cont=0;
            }
        }
    }
    printf("Podredeni chisla: \n");
    for(i=0; i<=p;i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
