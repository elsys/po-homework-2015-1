#include <stdio.h>
#include <string.h>

int main(){
    char str[125], temp;
    int i, lenght;

    scanf("%s", str);

    lenght = strlen(str);

    for(i = 0; i < lenght; i++){
        temp = str[i];
        str[i] = str[lenght - 1];
        str[lenght - 1] = temp;
        lenght--;
    }

    printf("%s", str);

    return 0;
}
