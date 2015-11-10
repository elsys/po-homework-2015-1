#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, i ,c=1;

scanf("%d",&n);

for(i=1; i*i<=n  ; i++)
{

    if((i*i) == n){ c=0; printf("1"); break;}

}

if(c) printf("0");
    return 0;
}

