#include<stdio.h>

void main(){
    char c[500];
    int i;
    printf("Enter a sentence :\n");
    while(1){
        scanf("%s",&c);
        if(c[0]=='S'&&c[1]=='T'&&c[2]=='O'&&c[3]=='P')
            break;
        else{
            for(i=0;i<500;i++){
                if(c[i]>='a'&&c[i]<='z')
                    c[i]=c[i]-32;
            }
        }
        printf("%s ",c);
    }
}

