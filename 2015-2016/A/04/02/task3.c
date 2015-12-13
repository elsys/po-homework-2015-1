#include <stdio.h>
#include <string.h>

int main()
{
	int maxn[1000];
    	int i,c,j,R;
    	
	for(i=0;i<1000;i++)
    	{
        	scanf("%d",&c);
        	if(c==42)

            	break;

        	else
            		maxn[i]=c;
    	}

    	for(c=0;c<(i-1);c++)
    	{
        	for(j=0;j<i-c-1;j++)
        	{

        	if(maxn[j] > maxn[j+1])
        
		{

            		R = maxn[j];
            		maxn[j] = maxn[j+1];
            		maxn[j+1] = R;
		}

        	}
    	}
    	printf("\n");
    	for(c=0;c<i;c++)
        	printf("%d\n",maxn[c]);
    	return 0;
}

