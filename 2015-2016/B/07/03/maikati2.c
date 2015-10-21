#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int main() {
        char rim[10];
        int a=0,ara[10],end=0,i;
        fgets(rim, 10, stdin);
        for(i=0; i<10; i++) {
            ara[i]=0;
        }
        while(a<strlen(rim)){
            if(rim[a] == 'C') ara[a] = 100;
            if(rim[a] == 'L') ara[a] = 50;
            if(rim[a] == 'X') ara[a] = 10;
            if(rim[a] == 'V') ara[a] = 5;
            if(rim[a] == 'I') ara[a] = 1;
            a++;
        }
        a = 0;
        while((a)<strlen(rim)){ 
            if(ara[a]>=ara[a+1]) end=end+ara[a];
            else {
                ara[a+1] = ara[a+1] - ara[a];
                end = end+ara[a+1];
            }
            a++;
        }
        printf("%d",end);
        return 0;
    }
