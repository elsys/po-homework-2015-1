#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , v , p, sum=0;

    scanf("%d", &n);
    
	scanf("%d", &v);
	if(v<0 || v>1)
	{
		return 0;
	}

    scanf("%d", &p);
    if(p<0 || p>7)
    {
    	return 0;
    }

    if(v==0)
    {
        sum = n & ~(1 << p);
    }else 
    {
    	if(v==1)
    	{
        	sum = n|(1<<p);
    	}
    }

    printf("%d\n", sum);

    return 0;
}