#include <stdio.h>

int prime(int chislo)
{
    if(chislo <= 0)
    	return 0;
    int i = 2;
    for(; i <= chislo; i++)
    {
        if(chislo%i == 0)
            return 0;
    }
    return 1;
}


int main()
{
    int chislo;
    scanf("%d",&chislo);
    printf("%d", prime(chislo));
    return 0;
}
