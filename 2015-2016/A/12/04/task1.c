#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_prime(char* str)
{
    int i,j,k,num;

	j=strlen(str)-1;
	for(i=0;i<j;i++)
	{
		if(str[i]<'0' || str[i]>'9')
        {
			return -1;
		}
	}
    num=atoi(str);

    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    k=1;
    for(i=2;i<num;i++)
    {
        j=num%i;
        if(j==0)
        {
            k=0;
        }
    }
    if(num<0)
    {
        return -1;
    }
    return k;
}

int main()
{
    char num[11];
    scanf("%s",num);
    printf("%d",is_prime(num));
}
