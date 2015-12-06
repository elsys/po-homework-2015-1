#include <stdio.h>
#include <string.h>

int main(){
    char str[473];
    int i, length;

    while(1){
        scanf("%s",str);

        length=strlen(str);

        if(str[0] == 'S' && str[1] == 'T' && str[2] == 'O' && str[3] == 'P')
                break;

        for(i = 0; i < length; i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }

            printf("%s ", str);
    }

    return 0;
}
