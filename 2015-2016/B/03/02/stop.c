#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    fgets( s, 1000, stdin );
    int i,k, nostop=0;
    for(i=0; i<strlen(s); i++) {
        if(s[i]=='s'&&s[i+1]=='t'&&s[i+2]=='o'&&s[i+3]=='p') {
            for(k=0; k<i; k++) {
                if(s[k]<='z'&&s[k]>='a') {
                    s[k]=s[k]-32;
                }
                printf("%c", s[k]);
            }
            nostop=1;
        }
    }
    if(nostop==0)
    printf("%s", s);
    return 0;
}
