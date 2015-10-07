#include <stdio.h>
int main()
{
    int a[1000];
    int s=0,i=0,j,temp;
    printf("Enter numbers for sorting, stop with 42: \n");
    while(s < 1000){
    scanf("%d", &a[i]);
    if(a[i] == 42){
            break;
    }
    s++;
    i++;
    }
    for(i=0; i<s; i++){
        for(j=i+1; j<s; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted list: \n");
    for(i=0; i<s; i++){
        printf("%d \n", a[i]);
    }
    return 0;
}
