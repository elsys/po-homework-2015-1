#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,x,l,m,ca[10],k=0;
    char c[10];

        printf("Vavedi chislo - ");scanf("%s", c);
        m=strlen(c);

        while(i!=m){
        if(c[i]>='I') ca[i]=1;
        if(c[i]=='V') ca[i]=5;
        if(c[i]=='X') ca[i]=10;
        if(c[i]=='L') ca[i]=50;
        if(c[i]=='C') ca[i]=100;
         i++;}
        i=0;

        while(i!=m-1){
        if(ca[i]<ca[i+1]) k=k+(ca[i+1]-ca[i]);
        if(ca[i]>ca[i+1] || ca[i]==ca[i+1] )if(i!=m-2){k=k+ca[i];}
        else k=k+ca[i]+ca[i+1];
            i++;
        }
        if (m==1) k=k+ca[0];

        printf("\n%d",k);

    return 0;
}
