 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int mass[20];
    int help[20];
    help[0] = 0;
    help[20] =0;

    mass[0]=0;
    mass[20] = 0;
    int e;
    int i;

scanf("%d",&e);
for(i=1;i<=e;i++)
{
    scanf("%d",&mass[i]);
}
for(i=1;i<e;i++)
{
    if(mass[i-1] == mass[i+1]){

       help[i] = 0;
    }
    else help[i] = 1;
}
mass[e]= 0;
for(i=0;i<=e;i++)
{
    printf("%d",help[i]);
}
printf("0");
    return 0;
}


