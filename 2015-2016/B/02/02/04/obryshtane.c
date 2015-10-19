#include <stdio.h>



int main()
{
    int i,x,y,c[10];
    for(y=0;y<10;y++)
        c[y]=0;



    scanf("%d", &y);



    while(y>0)
    {
        x=y%10;
        for(i=0;i<10;i++)
        {
            if(x==i) c[i]++;
        }
        y=y/10;
    }



    for(x=0;x<10;x++)
        printf("\n%d - %d\n", x, c[x]);
    return 0;

}
