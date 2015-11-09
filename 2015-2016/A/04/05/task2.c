#include <stdio.h>

void next_generation(int *current,int *next,int length);

void next_generation(int *current,int *next,int length)
{
    int i;
    next[0]=0;
	next[length-1]=0;

	for(i=1;i<length-1;i++)
    {
		if((current[i]==0) && ((current[i-1]==1 || current[i+1]==1) && !(current[i-1]==1 && current[i+1]==1)))
		{
			next[i]=1;
		}
		else
			next[i]=0;
	}

	for(i=0;i<length;i++)
    {
		current[i]=next[i];
	}
}

int main()
{
    int length,n,current[20],next[20],countforZeros,i,j;

    printf("Enter length: ");
    scanf("%d",&length);
    if(length>20)
    {
        printf("Length should be max 20!");
        return 1;
    }
    if(length<=0)
    {
        printf("Length should be 1 at least!");
        return 1;
    }
void next_generation(int *current,int *next,int length)
{
    int i;
    next[0]=0;
	next[length-1]=0;

	for(i=1;i<length-1;i++)
    {
		if((current[i]==0) && ((current[i-1]==1 || current[i+1]==1) && !(current[i-1]==1 && current[i+1]==1)))
		{
			next[i]=1;
		}
		else
			next[i]=0;
	}

	for(i=0;i<length;i++)
    {
		current[i]=next[i];
	}
}
    for(i=0;i<length;i++)
    {
        scanf("%d",&n);
        if(n==0 || n==1)
            {
            if((i==0 || i==(length-1)) && n==1)
            {
                printf("\nFirst and last cell should always be 0!");
                return 1;
            }
            current[i]=n;
        }
        else{
            printf("\nExpected 0 or 1!");
            return 1;
        }
    }

    for(i=0;i<1000;i++)
    {
        countforZeros=0;

		for(j=0;j<length;j++)
        {
            if(current[j]==0)
            {
                countforZeros++;
                printf(".");
            }
            else
                printf("*");
		}
        printf("\n");
        if(countforZeros==length)
            break;

        next_generation(current,next,length);
    }

return 0;
}


