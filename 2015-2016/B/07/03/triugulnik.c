#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int wisochina, osnowa,space,i,s,o;
    scanf("%d", &wisochina);
    osnowa = 2*wisochina-1;
    i = 0;
    o = i;
    space = osnowa/2;
    s = space;
    for(;wisochina>0;wisochina--) {
        for(;space>0;space--){
            printf("  ");
        }
        for(;osnowa-i<=osnowa+o;i--){
            printf(" .");
        }
    s--;
    o++;
    i = o;
    space = s;
    printf("\n");
    }
    return 0;
}
