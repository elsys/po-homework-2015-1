#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,x,l,m,ca[104];
    char c[104];

        printf("Vavedi chislo - ");scanf("%s", c);
        m=strlen(c);

        while(i!=m){
        if(c[i]>='2' && c[i]<='9')ca[i]=c[i]-48;
        if(c[i]=='T') ca[i]=10;
        if(c[i]=='J') ca[i]=11;
        if(c[i]=='Q') ca[i]=12;
        if(c[i]=='K') ca[i]=13;
        if(c[i]=='A') ca[i]=14;
        i++;}
        l=i;
        i=0;

          while(l!=0){
        while(i!=l-1){
          if(ca[i]>ca[i+1]){
               x=ca[i];
               ca[i]=ca[i+1];
               ca[i+1]=x;
                        }
                i++;
                     }
    i=0;
    l--;
    }
             i=0;

        while(i!=m){
        if(ca[i]>=2 && ca[i]<=9) c[i]=ca[i]+48;
        if(ca[i]==10) c[i]='T';
        if(ca[i]==11) c[i]='J';
        if(ca[i]==12) c[i]='Q';
        if(ca[i]==13) c[i]='K';
        if(ca[i]==14) c[i]='A';
        printf("\n%c",c[i]);
        i++;
          }

return 0;
}
