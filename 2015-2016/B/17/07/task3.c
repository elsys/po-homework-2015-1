#include <stdio.h>

int main(){

    int num,i,j,help,palindrome=0,k,div;
    char hex[100];

    scanf("%d",&num);
    for(;palindrome!=1;num++){
        div=num;
        for(j=0,i=0;div>0;i++){
            help=div%16;
            if(help<10)
                hex[i]=help+48;
            else
                hex[i]=help+55;

            div=div/16;
            j++;
        }
        for(palindrome=1,k=0,i=j-1;k<i;k++,i--){
            if(hex[k]!=hex[i]){
                palindrome=0;
            }
        }
        if (palindrome == 1) break;
    }
    printf("%X",num);

    return 0;
}
