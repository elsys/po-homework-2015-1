#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_Prime(char*);
int strlen(char*);
int toInt(char*);

int main()
{
    char s[10];
    scanf("%s", ({printf("Enter a number:");s;}));
    printf("%d",is_Prime(s));

    return 0;
}

int strlen(char* string) {
    unsigned int i = 0;
    while(*string++)
        i++;
    return i;
}

int is_Prime(char* str) {
    int i = 5, num; /// minimal prime number when the program has passed the else if

    if((num = toInt(str)) == -1)
        return -1;

    if(num <= 3)
        return (num > 0) ? 1 : 0;
    else if(num % 2 == 0)
        return 0;
    for(i = 5; i <= (int)(sqrt(num)); i+= 2)
        if(num % i == 0)
            return 0;

    return 1;
}

int toInt(char* str) {
    int num = 0, i, k = 1;

    i = strlen(str) - 1;
    while(i-- != 0) k*=10;
    i = 0;
    while(str[i] != '\0') {
        if(!(str[i] >= '0' && str[i] <= '9'))
            return -1;
        num += (str[i] - '0')*k;
        k/=10;
        i++;
    }

    return num;
}
