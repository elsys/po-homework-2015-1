#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main() {
        char a[13],b;
        int i,p;
        fgets(a, 14, stdin);
        for(i=0;i<13;i++){
            if(a[i] == 'T') a[i] = ':';
            if(a[i] == 'J') a[i] = ';';
            if(a[i] == 'Q') a[i] = '<';
            if(a[i] == 'K') a[i] = '=';
            if(a[i] == 'A') a[i] = '>';
        }
        for(p=0;p<12;p++){
            for(i=0;i<12;i++) {
            if(a[i]>a[i+1] ) {
                b = a[i];
                a[i] = a[i+1];
                a[i+1] = b;
            }
            }
        }
        for(i=0;i<13;i++){
            if(a[i] == ':') a[i] = 'T';
            if(a[i] == ';') a[i] = 'J';
            if(a[i] == '<') a[i] = 'Q';
            if(a[i] == '=') a[i] = 'K';
            if(a[i] == '>') a[i] = 'A';
            printf("%c",a[i]);
        }
        return 0;
    }
