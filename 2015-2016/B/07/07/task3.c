#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=0,num,i,ezway, end = 0,off;
    char hexa[10];
    scanf("%d", &num);
    off = num;
    for(i=0;num>0;i++){
        ezway = num%16;
        if(ezway<10) hexa[i] = ezway + '0';
        else hexa[i] = ezway + 55;
        num /= 16;
    }
    while(a <= i/2){
        if(hexa[a] != hexa[i-a-1]) end = 1;
        a++;
    }
    while(end == 1) {
        off++;
        num = off;
        for(i=0;num>0;i++){
            ezway = num%16;
            if(ezway<10) hexa[i] = ezway + '0';
            else hexa[i] = ezway + 55;
            num /= 16;
        }
        end = 0;
        a=0;
        while(a <= i/2){
            if(hexa[a] != hexa[i-a-1]) end = 1;
            a++;
        }
    }
    while(i>0){
        printf("%c",hexa[i-1]);
        i--;
    }
    return 0;
}
