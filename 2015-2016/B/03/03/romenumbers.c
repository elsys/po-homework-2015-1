#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int n[100],i,out=0;
    for(i=0; i<100; i++) {
        n[i]=0;
    }
    fgets(s, 100, stdin);
    for(i=0; i<strlen(s); i++) {
        switch(s[i]) {
            case 'X' : n[i]=10; break;
            case 'V' : n[i]=5; break;
            case 'L' : n[i]=50; break;
            case 'C' : n[i]=100; break;
            case 'I' : n[i]=1; break;
        }
        if(i>0&&n[i]>n[i-1]) {
                n[i-1]=n[i]-n[i-1];
                n[i]=0;
        }
    }
    for(i=0; i<strlen(s); i++) {
        out=out+n[i];
    }
    printf("%d", out);
    return 0;
}
