#include <stdio.h>
#include <string.h>

int main()
{
    int n,a,b=1,l;
    char c = '+';

    scanf("%d",&n);
for(;n!=0;n--){
    for(a=n;a!=0;a--){
        printf(" ");}
        for(l=b;l!=0;l--){
            printf("%c",c);
        }
printf("\n");
b=b+2;
    }
    return 0;
}
