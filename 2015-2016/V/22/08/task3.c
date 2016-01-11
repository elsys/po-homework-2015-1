#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eleni[200];
    int i=0,br,j=0,a=0,n;
    scanf("%d",&br);
    n=br;
    while(i!=n){
        scanf("%d",&eleni[i]);
        i++;
    }
    i=0;
    while(i<n){
        j=0;
        while(j<n){
            if(j==i)
                j++;
            if(eleni[i]==eleni[j])
                a=2;
                j++;
        }
        if(a==0)
            break;
        if(a==2)
            a=0;
        i++;
    }
    printf("%d",i);

    return 0;
}
