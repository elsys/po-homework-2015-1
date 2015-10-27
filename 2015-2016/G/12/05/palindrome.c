#include <stdio.h>
#include <string.h>

int main()
{
    char niz[100];
    int i1,i2,n=0;
    //scanf("%s",niz);
    gets(niz);
    i1=0;
    i2=strlen(niz)-1;
    while(i2 > i1){
        if(niz[i1] == niz[i2]){
            i1++;
            i2--;
        }else{
            n=1;
            printf("1");
            break;
            }
    }if(n==0){
        printf("0");
    }

    return 0;
}
