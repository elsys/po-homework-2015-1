#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char w[150], w_rev[150], temp;
    int i = 0, k = 0, len = 0, status = 0;


    printf("Enter text:\n");
    gets(w);
    strcpy(w_rev,w);

    len = strlen(w) - 1;

    while(i < len){
        temp = w_rev[i];
        w_rev[i] = w_rev[len];
        w_rev[len] = temp;
        i++;
        len--;

    }
   // printf("%s\n",w_rev);
   // printf("w_len:%d\n",strlen(w));
   // printf("w_rev_len:%d\n",strlen(w_rev));
    printf("\n");
    len = strlen(w) - 1;

    while(k <= len){
        if(w[k] == w_rev[k]){
            status = 1;
        }else{
            status = 0;
        }
        k++;
    }

    printf("%d\n",status);

    return 0;
}
