#include <stdio.h>
#include <string.h>
int main(){
    char str[500];
    int i;
    printf("Enter a sentence :\n");
    while(1){
        scanf("%s",str);
        if(str[0]=='S'&&str[1]=='T'&&str[2]=='O'&&str[3]=='P')
                break;
        for(i=0;i<strlen(str);i++){
            if(str[i]>='a'&&str[i]<='z')
                str[i]=str[i]-32;
        }
            printf("\n%s ",str);
    }
    return 0;
}
