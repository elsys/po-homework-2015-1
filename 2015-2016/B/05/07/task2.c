#include <stdio.h>
int main(){
int v,p,n;
scanf("%d",&n);
scanf("%d",&v);
    while (v<0 || v>1)
        scanf("%d",&v);
    scanf("%d",&p);
    while (p<0 || p>7)
        scanf("%d",&p);
    if(v == 0){
        n = (~(1 << p)) & n;
    }
    if(v == 1){
        n = (1 << p) | n;
    }
    printf("%d",n);
return 0;
}
