#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int d_to_h(int, int, int);

int main() {
    char type, chara;
    unsigned int r, g, b;

    scanf("%s", &type);
   
    if(type == 'd'){
        int r, g, b;
        scanf("%d, %d, %d", &r, &g, &b);
        d_to_h(r, g, b);
    }

    if(type == 'h'){
        
        scanf(" %c%02x%02x%02x", &chara, &r, &g, &b);
        printf("rgb(%d, %d, %d) \n\n", r, g, b);

    }
   
   
    return 0;
}

int d_to_h(int r, int g, int b) {
    int final[7];

    int i, temp, temp1;

    final[0] = '#';

    temp = r;

    i = 2;
    while(temp != 0) {
        temp1 = temp % 16;

        if(temp1 < 10) temp1 += 48;
        else temp1 += 87;

        final[i--] = temp1;
        temp = temp / 16;
    }

    temp = g;

    i = 4;

    while(temp != 0) {
        temp1 = temp % 16;

        if(temp1 < 10) temp1 += 48;
        else temp1 += 87;

        final[i--] = temp1;
        temp = temp / 16;
    }

    temp = b;

    i = 6;

    while(temp != 0) {
        temp1 = temp % 16;

        if(temp1 < 10) temp1 += 48;
        else temp1 += 87;

        final[i--] = temp1;
        temp = temp / 16;
    }

    for(i = 0; i < 7; i++) {
        printf("%c", final[i]);
    }

    printf("\n\n");
    return 0;

}