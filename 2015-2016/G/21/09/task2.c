#include <stdio.h>

int change_bit_at_position(int, int, int);

int main()
{
    int numb,v,p;

    scanf("%d",&numb);
    do
    {
        scanf("%d",&v);
    }while(v < 0 || v > 1);

    do
    {
    	scanf("%d",&p);
    }while(p < 0 && p > 7);

    int changed_numb = change_bit_at_position(numb,v,p);

    printf("%d", changed_numb);
    return 0;
}

int change_bit_at_position(int numb,int v, int p)
{
    int bit_at_position = (numb & (1<<p)) == 0 ? 0 : 1;
    int output = numb;
    if(bit_at_position != v)
    {
        output = numb ^ (1<<p);
    }
    return output;
}

