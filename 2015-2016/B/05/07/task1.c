#include <stdio.h>
int main(){
int a,b;
scanf("%d",&a);
    while (a<0 || a>7)
        scanf("%d",&a);
scanf("%d",&b);
    while (b<0 || b>200)
        scanf("%d",&b);
    if(((b >> a) & 1) == 1)
        printf ("1");
    if(((b >> a) & 1) == 0)
        printf ("0");
 return 0;
}
