#include <stdio.h>


int rotr(int * a,int * b,int *c);
int main()
{
    int e,f,g;

    scanf("%d",&e);
    scanf("%d",&f);
    scanf("%d",&g);

    rotr(&e,&f,&g);
    printf("%d",e);
    printf("%d",f);
    printf("%d",g);

    return 0;
}


int rotr(int * a, int * b, int*c)
{
    int n,i,pom;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        pom=*a;
        *a=*c;
        *c=*b;
        *b=pom;

    }
    return 0;
}

