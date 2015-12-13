#include <stdio.h>

int main()
{
    int num[10]={0};
    int n,i;

    scanf("%d",&n);

    if (n<0)
        {
            n*=-1;
        }

    while(n>0)
        {
            int y=n%10;
            num[y]++;
            n/=10;
        }

    for(i=0;i<10;i++)
        {
            if(num[i]!=0)
            {
                printf("%d = %d times\n",i,num[i]);
            }
        }
    return 0;
}

