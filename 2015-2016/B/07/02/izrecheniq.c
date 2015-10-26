#include <stdio.h>
int main () {
    int a=0,i=0,basi=0;
    char c,b[150];
    while (a!=1){
        c = getche();
        b[i] = c;
        if(c == 'P') {
            if(b[i-1] == 'O' && b[i-2] == 'T' && b[i-3] == 'S') a = 1;
        }
        i++;
    }
    i=0;
    printf("\n");
    basi = strlen(b)-4;
    while(i<basi) {
        if(b[i] >= 97 && b[i] <= 122) b[i] = b[i]-32;
        i++;
    }
    printf("%s",b);



return 0;
}
