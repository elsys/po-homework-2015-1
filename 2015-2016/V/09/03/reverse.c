#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], temp;
    int i=0, j=0;
    printf("Enter words: \n");
    gets(a);
    j = strlen(a) - 1;
    for(i;i<j;i++){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("%s", a);
    return 0;
}
