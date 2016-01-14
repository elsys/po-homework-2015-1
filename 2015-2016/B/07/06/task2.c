#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,hi=0,end=0;
    char text[160];
    fgets(text,200,stdin);
    for(i=0;i<strlen(text);i++){
        if(text[i] >= 't' && text[i] <= 'y') hi=1;
        if(text[i] != 's' && text[i] != 'z' && text[i] != ' ') {
        if((text[i]-96-hi)%3 == 0 && text[i]-96 <= 26 && text[i]-96 >= 1) end = end+3;
        if((text[i]-96-hi)%3 == 2 && text[i]-96 <= 26 && text[i]-96 >= 1) end = end+2;
        if((text[i]-96-hi)%3 == 1 && text[i]-96 <= 26 && text[i]-96 >= 1) end = end+1;
        }
        hi = 0;
        if(text[i] == 's' || text[i] == 'z') end = end+4;
        if(text[i] == ' ') end++;
        hi =0;
    }
    printf("%d",end);
return 0;
}
