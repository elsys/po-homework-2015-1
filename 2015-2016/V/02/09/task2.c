#include <stdio.h>

int main()
{
    int n;
    int v;
    int p;
    int y=0;
    int x=0;
    int s=2;
    int buffer[100];
    scanf("%d",&n);
    scanf("%d", &v);
    scanf("%d", &p);

    for(y = 0; y < 100; y++)
    {
        buffer[y] = 0;
    }

    y=0;

    while(n>0)
    {
        buffer[y] = n%2;
        n = n/2;
        y++;
    }

    buffer[p] = v;
    n = 0;

    for(y = 0; y < 100; y++)
    {
        if(buffer[y] == 1 && (y != 0 && y != 1))
        {
           for(x = 2; x <= y; x++)
                {
                    s = s*2;
                }
            n += s;
            s = 2;
        }
        else if(y == 1)
        {
                n += 2;
        }
        else if(y == 0)
        {
            n += 1;
        }
    }

    printf("%d", n);
}
