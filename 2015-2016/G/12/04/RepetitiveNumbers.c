#include <stdio.h>

int main()
{
    int array[10];
    int i,number,a;
    printf("number: ");scanf("%d",&number);
    for(i=0;i<=9;i++){
        array[i] = 0;
    }
    for(i=0;i<=9;i++){
        while(number != 0){
            a = number%10;
            array[a] = array[a]+1;
            number = number/10;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d > %d\n",i,array[i]);
    }
return 0;
}
