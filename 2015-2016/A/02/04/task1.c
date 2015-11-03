#include <stdio.h>
#include <stdlib.h>
int is_prime(int n);
int main()
{   int n,c;
    scanf("%d",&n);
    c=is_prime(n);
    printf("%d",c);
    return 0;
}
int is_prime(int n)
{   int i,j=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
           j++;
    if(j==2)
        return 1;
    if(j>2)
        return 0;
    else
        return -1;

}
