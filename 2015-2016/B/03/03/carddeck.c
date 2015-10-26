#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[13];
    int p[13],cont,change,k=0,swap,h,i;
    fgets(s, 1000, stdin);
    h=strlen(s);
    for(i=0;i<h;i++) {
        switch(s[i]) {
            case '2': p[i]=1; break;
            case '3': p[i]=2; break;
            case '4': p[i]=3; break;
            case '5': p[i]=4; break;
            case '6': p[i]=5; break;
            case '7': p[i]=6; break;
            case '8': p[i]=7; break;
            case '9': p[i]=8; break;
            case 'T': p[i]=9; break;
            case 'J': p[i]=10; break;
            case 'Q': p[i]=11; break;
            case 'K': p[i]=12; break;
            case 'A': p[i]=13; break;
        }
    }
    for(cont=1; cont>0; change=0,k++) {
        for(i=0; i<h; i++) {
            if(p[i]>p[i+1]) {
                swap=p[i];
                p[i]=p[i+1];
                p[i+1]=swap;
                change++;
            }
            if(i==h-1&&change>0) {
                cont=1;
            } else {
                cont=0;
            }
        }
    }
    for(i=0;i<h;i++) {
        switch(p[i]) {
            case 1: s[i]='2'; break;
            case 2: s[i]='3'; break;
            case 3: s[i]='4'; break;
            case 4: s[i]='5'; break;
            case 5: s[i]='6'; break;
            case 6: s[i]='7'; break;
            case 7: s[i]='8'; break;
            case 8: s[i]='9'; break;
            case 9: s[i]='T'; break;
            case 10: s[i]='J'; break;
            case 11: s[i]='Q'; break;
            case 12: s[i]='K'; break;
            case 13: s[i]='A'; break;
        }
    }
    printf("%s", s);
    return 0;
}
