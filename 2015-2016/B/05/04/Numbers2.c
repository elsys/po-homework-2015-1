#include <stdio.h>

int is_prime (){
int n,i=2;
printf("\n Number:");
scanf("%d", &n);
    while(n%i != 0)i++;
    if(i==n)
        printf(" -1");
    else
        printf(" -0");
return 0;
}

int main(){
is_prime ();
return 0;
}
