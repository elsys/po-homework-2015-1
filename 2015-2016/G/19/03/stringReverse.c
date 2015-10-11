#include<stdio.h>
#include<string.h>


int main(){
    char str[1000];
    char rev[1000];
    int i=0,j=0;

    printf("Enter any string : ");
    scanf("%s",str);
    i = strlen(str) - 1;

    while(i >= 0)
    {
        rev[j++] = str[i--];
    }

    rev[j]='\0';
    printf("Reverse of string is : %s", rev);

    return 0;
}

