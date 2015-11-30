#include <stdio.h>

int main()
{
    int num[1000];
    int i = 0, j = 0;
    int k, temp, p;

    while(i < 1000){
        scanf("%d",&num[i]);
        if(num[i] == 42)
            break;
        i++;
    }
    p = i;

    while(j < i){
        for(k = 0; k < i - j - 1; k++){
            if(num[k] > num[k+1]){
                temp = num[k];
                num[k] = num[k+1];
                num[k+1] = temp;

            }
        }
        j++;
    }

    for(i = 0; i < p; i++)
        printf("%d\n",num[i]);

    return 0;
}
